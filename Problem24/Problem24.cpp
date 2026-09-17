#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n";
	getline(cin, text);

	return text;

}

void capitalizeFirstLetterOfEachWord(string text) {
	cout << "\nString after conversion :\n";
	if (!text.empty())
		text[0] = toupper(text[0]);
	
	for (int i = 0; i < text.length(); i++) {

		if (text[i] == ' ' && i + 1 < text.length())
		{

			text[i + 1] = toupper(text[i + 1]);

		}
		
	}
	cout << text << endl;
}

int main()
{


	capitalizeFirstLetterOfEachWord(readStringFromUser());

}

