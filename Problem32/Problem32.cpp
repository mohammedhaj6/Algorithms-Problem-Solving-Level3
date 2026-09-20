#include <iostream>
#include <string>
#include <cctype>

using namespace std;







char readCharFromUser() {

    char c1;
    cout << "Please Enter a character ?\n";
    cin >> c1;

    return c1;
}


bool isVowels(char ch) {

    string characterVowel = "aeiou";

    for (int i = 0; i < characterVowel.length();i++) {

        if (  characterVowel[i] == ch) {
            return true;
        }
    }
    return false;
}


int main()
{
    char ch = readCharFromUser();
    if (isVowels(ch)) {
        cout << "\nYes : letter " << ch << " is vowel\n";
    }
    else {
        cout << "\nNo : letter " << ch << " is not vowel\n";
    }
}

