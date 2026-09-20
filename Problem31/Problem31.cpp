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

char readCharFromUser() {

    char c1;
    cout << "Please Enter a character ?\n";
    cin >> c1;

    return c1;
}

int countCharInStringMatchCase(string text, char ch) {

    int counter = 0;

    for (int i = 0; i < text.length(); i++) {

        if (text[i] == ch) {
            counter++;
        }

    }

    return counter;
}

int countCharInStringIgnoreCase(string text, char ch) {

    int counter = 0;

    for (int i = 0; i < text.length(); i++) {

        if (tolower(text[i]) == tolower(ch)) {
            counter++;
        }

    }

    return counter;
}

int main()
{
    string text = readStringFromUser();
    char ch = readCharFromUser();

    char otherCase = isupper(ch) ? tolower(ch) : toupper(ch);

    cout << "\n\nLetter " << ch
        << " Count "
        << countCharInStringMatchCase(text, ch)
        << endl;

    cout << "Letter " << ch
        << " Or " << otherCase
        << " Count "
        << countCharInStringIgnoreCase(text, ch)
        << endl;
}