#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n";
	getline(cin,text);

	return text;
	
}

void getFirstLettersFromString(string text) {
	cout << "\nFirst letters of this string :\n";
	cout << text[0]<<endl;
	for (int i = 0; i < text.length();i++) {

		if (text[i] == ' ' && i + 1 < text.length())
		{
			cout << text[i + 1] << endl;
		}

	}
}


int main()
{

	
	getFirstLettersFromString(readStringFromUser());

}

