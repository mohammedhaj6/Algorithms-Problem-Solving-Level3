#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n\n";
	getline(cin, text);
	return text;

}

void  countSmallAndCapitalLetterInString(string text) {
	
	int length = text.length();
	int capitalLettersCount = 0;
	int smallLettersCount = 0;

		for (int i = 0; i < length;i++) {

			if (isupper(text[i])) {
				capitalLettersCount++;
			}else if(islower(text[i])) {
				smallLettersCount++;
			}
		}
		cout << "------------------------";
		cout << "\nString Length = " << length<<endl;
		cout << "\nCapital Letters Count = " << capitalLettersCount << endl;
		cout << "\nSmall Letters Count = " << smallLettersCount << endl;
}


int main()
{
	countSmallAndCapitalLetterInString(readStringFromUser());
}

