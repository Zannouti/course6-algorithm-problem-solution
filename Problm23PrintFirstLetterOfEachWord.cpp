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

void PrintFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;
    
    for( short i = 0 ; i < S1.length() ;i++)
    {
        if(S1[i] != ' ' && isFirstLetter )
        {
            cout << S1[i] << endl;
        }
        
        isFirstLetter = (S1[i] == ' ' ? true : false );
        
    }
   
}


int main()
{
    PrintFirstLetterOfEachWord(readString());
    
}