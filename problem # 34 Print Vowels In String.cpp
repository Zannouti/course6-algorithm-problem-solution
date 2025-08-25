#include <iostream>
using namespace std;

char ReadChar() {
    char Ch1;
    cout << "Please Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}

string readString()
{
    string S1;
    cout << "please enter your string\n";
    getline(cin,S1);
    return S1;
}
 
bool isVowel(char letter)
{
    letter = tolower(letter);
    
    return ((letter == 'a' || letter == 'o'|| letter == 'i'||letter == 'e'||letter == 'o'));
    
}
void PrintVowelsInString(string S1)
{
      short counter = 0;
     for (short i = 0; i < S1.length(); i++)
    {
    if(isVowel(S1[i]))
    cout << S1[i] <<"   ";
    
    }
}

int main()
{
    string S1 = readString();
    
    cout <<"\n  vowels in string are : ";
    PrintVowelsInString(S1); 
    
    return 0;
}