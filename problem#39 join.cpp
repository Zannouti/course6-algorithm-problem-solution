#include <iostream>
#include<string>
#include <vector> 
using namespace std;




string joinString(vector <string> Vstring,string delim)
{
    string S1 ="";
    
    for(string &Vnames : Vstring )
    {
        S1 = S1 + Vnames + delim;
    }
    return S1.substr(0, S1.size() - delim.size());

}


int main()
{
    vector <string> Vstring = {"Ali", "Sara", "Mohammed"};
    cout << joinString(Vstring," ");

    return 0;
    
}