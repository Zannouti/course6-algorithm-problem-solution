
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

short CountUpperLetter(string S1)
{
    short counter = 0;
     for (short i = 0; i < S1.length(); i++)
    {
       if(isupper(S1[i]))
       {
           counter ++;
       }
    }
    return counter;
}

short CountLowerLetter(string S1)
{
    short counter = 0;
     for (short i = 0; i < S1.length(); i++)
    {
       if(islower(S1[i]))
       {
           counter ++;
       }
    }
    return counter ;
}

int main()
{
    string S1 = readString();
    short NumberCharacter = 0;
        NumberCharacter = S1.length();
    cout << "Number of characters\n";
    cout << NumberCharacter << endl ;
    cout << "Number of capital letter\n";
    cout << CountUpperLetter(S1) << endl;
    cout << "Number of lower letter\n";
    cout << CountLowerLetter(S1);
    
    return 0;
}