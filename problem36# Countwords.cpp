#include <iostream>
#include<string>
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter a string?\n";
    getline(cin,S1);
    return S1;
}

short CountWords(string S1)
{
    string delim = " "; //delimiter
    
    cout << "\n  the number of words :  \n\n";
    short pos = 0;
    string sWord;
    short counter = 0;
    while((pos = S1.find(delim)) != std :: string:: npos )
    {
        sWord = S1.substr(0,pos);
        
        if(sWord != "")
        {
            counter++;  
        }
        
        S1.erase(0,pos+delim.length()); /* erase() until position and move to next word   */
        }
        
        if(S1 != "")
        {
            counter++;  
        }
        return counter;
    
}

int main()
{
   cout << CountWords(ReadString());
    return 0;
}