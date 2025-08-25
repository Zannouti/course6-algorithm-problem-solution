#include <iostream>
#include <cctype> // for isupper, tolower, toupper
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter a string?\n";
    getline(cin,S1);
    return S1;
}

char ReadChar() {
    char Ch1;
    cout << "Please Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}


short CountLetter(string S1,char letter)
{
    short counter = 0;
    for(short i = 0; i < S1.length(); i++)
    {
        if(S1[i] == letter)
        {
        counter ++;
        }
    }
    return counter;
}

int main()
{
    
    string S1 = ReadString();
    char letter = ReadChar();
    cout <<"\n Letter'" << letter << "\' count = "<<CountLetter( S1,letter);
    
    
}