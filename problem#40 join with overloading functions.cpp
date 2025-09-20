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

string joinString(string arr[10],string delim, short length1)
{
    string S1 ="";
    
    for(int i = 0; i < length1;i++)
    {
        S1 = S1 + arr[i] + delim;
    }
    return S1.substr(0, S1.length() - delim.length());

}




int main()
{
    vector <string> Vstring = {"Ali", "Sara", "Mohammed"};
    string arr[10]={"ahmed","saber","mohcine"};
    cout << "vector after join\n";
    cout << joinString(Vstring," ");
    cout << "\narray after join \n";
    cout << joinString(arr,"++",3);


    return 0;
    
}