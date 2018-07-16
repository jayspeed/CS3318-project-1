// CS3318-project-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	
	int key = 11;

	string line;

	ofstream decipheredfile;

	ifstream cipher("Cipher_Text.txt");

	if (cipher.is_open())
	{
		while (getline(cipher, line))
		{
			cout << line << '\n';
		}
		cipher.close();
	}
	else
	{
		cout << "file is not open" << '\n';

	}

	cout<<'\n';
	decipheredfile.open("decryptedfile");

	//int i = 0;
	//char decrypt;
	//int decryptValue;
	int count = 0, length;

	length = (int)line.length();

	char msg;

	for (int i = 0; line[i] != '\0'; ++i)
	{
		msg = line[i];

		if (msg >= 'a' && msg <= 'z')
		{
			msg = msg - key;

			if (msg < 'a') {
				msg = msg + 'z' - 'a' + 1;
			}
			line[i] = msg;
		}
		else if (msg >= 'A' && msg <= 'Z') {
			msg = msg - key;

			if (msg > 'a') {
				msg = msg + 'Z' - 'A' + 1;
			}
			line[i] = msg;
		}
	}

	cout << endl;
	cout << line;
	
	//for (count = 0; count < length; count++)
	//{
	//	if (isalpha(line[count]))
	//	{
	//		line[count] = tolower(line[count]);
	//		for (int i = 0; i < key; i++)
	//		{
	//			if(line[count] == 'z') 
	//				line[count] = 'a';
	//			else
	//			line[count]++;
	//		}
	//	}
	//}
	decipheredfile << line;
	decipheredfile.close();
	
	//while  (line[i] != '\n' > i) {


	//		decryptValue = ((int)line[i] - 97 + key) % 26 + 97;
	//		decrypt = (char)(decryptValue);
	//		decipheredfile << (decrypt);
	//		cout << (decrypt);
	//		i++;
	//	}

	//	decipheredfile.close();
		
	system("pause");
    return 0;
}



