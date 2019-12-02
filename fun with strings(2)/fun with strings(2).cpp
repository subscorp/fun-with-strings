
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int isPalindrome(string s);
void reverseString(string s);
void replaceCharacter(string s, int i, char c);
void replaceEveryOccurrence(string s, char c1, char c2);

int main()
{
	char choice;
	string s;

	do {
		cout << "enter 1 for palindrome checking" << endl;
		cout << "enter 2 to reverse a string" << endl;
		cout << "enter 3 to replace a character in a string" << endl;
		cout << "enter 4 to replace every occurrence of a character in a string" << endl;
		cout << "enter 0 to exit" << endl;

		cin >> choice;
		switch (choice) {

		// palindrome checking
		case '1':
			cout << "please enter a string to check" << endl;
			cin >> s;
			if (isPalindrome(s))
				cout << s << " is palindrome!" << endl << endl;
			else
				cout << s << " is not palindrome!" << endl << endl;
			break;

		// string reversing
		case '2':
			cout << "please enter a string to reverse" << endl;
			cin >> s;
			reverseString(s);
			break;

		// replacing one character in a string
		case '3':
			int pos;
			char c;
			cout << "please enter a string to replace a character in" << endl;
			cin >> s;
			cout << "please enter the position and new character" << endl;
			cin >> pos >> c;
			replaceCharacter(s, pos, c);
			break;
		case '4':
			char c1, c2;
			cout << "please enter a string to replace characters in" << endl;
			cin >> s;
			cout << "please enter character to replace and new character" << endl;
			cin >> c1 >> c2;
			replaceEveryOccurrence(s, c1, c2);
		}
		
	} while (choice != '0');
	
	
}

int isPalindrome(string s) {
	int flag = 1;
	for(int i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - i -1]) {
			flag = 0;
			break;
		}
	}
	return flag;
}

void reverseString(string s) {

	// reversing the string
	vector<char> newString;
	for (int i = s.length() -1; i >= 0; i--) {
		newString.push_back(s[i]);
	}

	// printing the reveresed string
	for (int i = 0; i < newString.size(); i++) {
		cout << newString[i];
	}
	cout << endl << endl;
}

void replaceCharacter(string s, int i, char c) {
	vector<char> newString;
	for (int i = 0; i < s.length(); i++) {
		newString.push_back(s[i]);
	}
	newString[i] = c;

	// printing the reveresed string
	for (int i = 0; i < newString.size(); i++) {
		cout << newString[i];
	}
	cout << endl << endl;
}

void replaceEveryOccurrence(string s, char c1, char c2) {

	// replacing every occurrence of c1 with c2
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c1)
			s[i] = c2;
	}

	// printing the new string
	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}
	cout << endl << endl;
}
