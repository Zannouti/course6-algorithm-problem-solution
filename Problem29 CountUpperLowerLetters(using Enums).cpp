
#include iostream
#include string
using namespace std;

enum enWhatToCount 
{
    SmallLetters = 0, capitalLetters = 1,All = 3
};

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount  All  )
{
     short counter = 0;
     for (short i = 0; i  S1.length(); i++)
    {
        if(WhatToCount == enWhatToCount  All )
        {
        return S1.length();
        }
        
       if(WhatToCount == enWhatToCount  capitalLetters && isupper(S1[i]))
       counter++; 
       if(WhatToCount == enWhatToCount  SmallLetters && islower(S1[i]))
       counter++;
    }
    return counter;
}


string readString()
{
    string S1;
    cout  please enter your stringn;
    getline(cin,S1);
    return S1;
}



int main()
{
    string S1 = readString();
    cout  CountLetters(S1)  endl;
    cout  CountLetters(S1,enWhatToCount  capitalLetters)  endl;
    cout  Number of lower lettern;
    cout  CountLetters(S1,enWhatToCount  SmallLetters)  endl;
    
    return 0;
}