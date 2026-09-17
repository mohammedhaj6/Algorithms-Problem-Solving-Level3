#include <iostream>
#include<string>

using namespace std;

string readStringFromUser() {

	string text;
	cout << "Please Enter Your String ?\n";
	getline(cin, text);

	return text;

}

string lowercaseString(string text) {
	
	


	for (int i = 0; i < text.length(); i++) {

	 	   text[i] = tolower(text[i]);

	}
	return text;
}


string uppercaseString(string text) {
	



	for (int i = 0; i < text.length(); i++) {

		text[i] = toupper(text[i]);

	}
	return text;
}



int main()
{
	string S1 = readStringFromUser();
	cout << "\n\nString after lower :\n\n";
	cout << lowercaseString(S1)<<endl;

	/* cout << "\nString after upper :\n";
	 cout<<uppercaseString(S1)<<endl;*/


}

