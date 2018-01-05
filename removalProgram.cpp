#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string vowelRemoval(string userString);

int main()
{
	string userString;
	string disemvowels;

	cout << "Enter characters or words and the program will remove the vowels" << endl;
	getline(cin, userString);
	 disemvowels = vowelRemoval(userString);
	 cout << "Your string with no vowels is " << endl << disemvowels<< endl;

	 system("pause");

	 return 0;
}

string vowelRemoval(string userString)
{
	int len = userString.length();

	string novowels;

	for(int i = 0; i < len; i++)
	{
		if(!isVowel(toupper(userString[i])))
		{
			novowels += userString.substr(i,1);
		}
	}
	return novowels;
}
		


bool isVowel (char ch)
{
	
	switch (ch)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		return true;
	default:
		return false;
	}
}