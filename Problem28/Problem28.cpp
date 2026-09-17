#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n\n";
	getline(cin, text);
	return text;

}


char  invertChar(char c1) {
	return (isupper(c1) ? tolower(c1) : toupper(c1));
}
string invertAllLettersInString(string text) {




	for (int i = 0; i < text.length(); i++) {

		text[i] = invertChar(text[i]);

	}
	return text;
}


int main()
{
	string text =  readStringFromUser();
	cout << "\nString after Inverting All Letters Case:\n\n";
	cout<<	invertAllLettersInString(text)<<endl;

}

