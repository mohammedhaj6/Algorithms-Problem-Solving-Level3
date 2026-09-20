#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string readStringFromUser() {

    string text;
    cout << "Please Enter Your String ?\n\n";
    getline(cin, text);

    return text;
}

bool isVowels(char ch) {

    string characterVowel = "aeiou";

    for (int i = 0; i < characterVowel.length(); i++) {

        if (characterVowel[i] == ch) {
            return true;
        }
    }
    return false;
}




void printVowelsCharInString(string text) {
    for (int i = 0; i < text.length(); i++) {

        if (isVowels(tolower(text[i]))) {
            cout << text[i]<<"  ";
        }

    }
    cout << endl;
}

int main()
{
    string text = readStringFromUser();
    cout << "\nNumber of vowels is: \n";
    printVowelsCharInString(text) ;

}

