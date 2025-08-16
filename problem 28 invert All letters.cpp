
#include <iostream>
#include <string>
using namespace std;

string readString()
{
    string S1;
    cout << "please enter your string\n";
    getline(cin,S1);
    return S1;
}
char InvertAllLetterCase(char ch) {
    return isupper(ch) ? tolower(ch) : toupper(ch);
}


string InvertAllLetters(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] =  InvertLetterCase(S1[i]);
    }
    return S1;
}


int main()
{
    string S1 = readString(); 
    cout << "String after Inverting All Letters Case:\n";
        S1 =  InvertLetters(S1);
        cout << S1 << endl ;
     
    
}