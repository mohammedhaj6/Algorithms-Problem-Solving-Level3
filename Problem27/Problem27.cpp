#include <iostream>
#include<string>

using namespace std;

char readCharFromUser() {

	char c1;
	cout << "Please Enter a character ?\n";
	cin >> c1;
	return c1;

}


char  invertChar(char c1) {
	return (isupper(c1) ? tolower(c1) : toupper(c1));
}


int main()
{
	char c1 = readCharFromUser();

	cout << "\nChar after inverting case:\n";
	cout << invertChar(c1)<<endl;

}

