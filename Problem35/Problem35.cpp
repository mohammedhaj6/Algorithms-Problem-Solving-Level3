#include <iostream>
#include <string>


using namespace std;


string readStringFromUser() {

    string text;
    cout << "Please Enter Your String ?\n\n";
    getline(cin, text);

    return text;
}


void printEachWordInString(string text) {


    string word = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            word += text[i];
        }
        else
        {
            if (word != "")
            {
                cout << word << endl;
                word = "";
            }
        }
    }
    if (word != "")
    {
        cout << word << endl;
    }
 

    
}


int main()
{
    string text = readStringFromUser();
    printEachWordInString(text);

}

