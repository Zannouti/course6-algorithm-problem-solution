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

string lowerAllLetters(string S1)
{

    for( short i=0 ; i < S1.length() ;i++)
    {
            S1[i] = tolower(S1[i]);
    }
    return S1;
   
}

string UpperAllLetters(string S1)
{

    for( short i=0 ; i < S1.length() ;i++)
    {
            S1[i] = toupper(S1[i]);
    }
    return S1;
   
}


int main()
{
    string S1 = readString(); 
    
    cout << "after Upper all letters : \n";
         S1 =  UpperAllLetters(S1);
     cout << S1 << endl  ;
     
     cout << "after lower all letters : \n\n";
        S1 = lowerAllLetters(S1);
     cout <<  S1 << endl  ;
    
}