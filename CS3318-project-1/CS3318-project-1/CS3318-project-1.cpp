// CS3318-project-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
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

	decipheredfile.open("decryptedfile");

	while (decipheredfile[1] != '\0')
	{

	}
	decipheredfile << ;
	

	system("pause");
    return 0;
}

