#include <iostream>
#include <string>


using namespace std;


string readStringFromUser() {

    string text;
    cout << "Please Enter Your String ?\n\n";
    getline(cin, text);

    return text;
}

int countWordsInString(string text) {
    int counter = 0;
    bool inWord = false;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && !inWord)
        {
            counter++;
            inWord = true;
        }
        else if (text[i] == ' ')
        {
            inWord = false;
        }
    }

    return counter;
}

int main()
{

   string text = readStringFromUser();
   cout<<endl<<"the number of words in your string is: " << countWordsInString(text) << endl;

   
}

