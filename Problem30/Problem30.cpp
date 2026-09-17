#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n\n";
	getline(cin, text);
	return text;

}

char readCharFromUser() {

	char c1;
	cout << "Please Enter a character ?\n";
	cin >> c1;
	return c1;

}

int countCharInString(string text,char ch) {

	int counter = 0;

	for (int i = 0; i < text.length();i++) {
		if (text[i]==ch) {
			counter++;
		}
	}
	return counter;
}


int main()
{
	string text = readStringFromUser() ;
	char ch = readCharFromUser();
	
	cout << "Letter "<<ch << " Count " << countCharInString(text, ch);
	

}

