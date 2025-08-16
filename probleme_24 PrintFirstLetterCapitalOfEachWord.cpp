
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

string UpperFirstLetterCapitalOfEachWord(string S1)
{
    bool isFirstLetter = true;
    
    for( short i=0 ; i < S1.length() ;i++)
    {
        if(S1[i] != ' ' && isFirstLetter ) 
        {
            
            S1[i] = toupper(S1[i]);
            
        }
        
        isFirstLetter = (S1[i] == ' ' ? true : false );
        
    }
    return S1;
   
}


int main()
{
    string S1 = readString(); 
    S1 = UpperFirstLetterCapitalOfEachWord(S1);
    
     cout << "after conversion to upper case become like that\n";
     cout << S1 << endl  ;
    
}