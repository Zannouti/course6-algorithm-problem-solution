#include <iostream>
#include<string>
#include<vector>
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter a string?\n";
    getline(cin,S1);
    return S1;
}



vector <string>  splite(string S1,string delim )
{
     vector <string> tokens;

    cout << "\n  the number of words :  \n\n";
    short pos = 0;
    string sWord;
    short counter = 0;
    while((pos = S1.find(delim)) != std :: string:: npos )
    {
        sWord = S1.substr(0,pos);
        
        if(sWord != "")
        {
            tokens.push_back(sWord);  
        }
        
        S1.erase(0,pos+delim.length()); /* erase() until position and move to next word   */
        }
        
        if(S1 != "")
        {
            tokens.push_back(S1);  
        }
        return tokens ;
}

int main()
{
    vector <string> myTokens = splite(ReadString()," ");
    for(string &tokens : myTokens)
    {
        cout << tokens << endl ;
    }
    
    return 0;
}