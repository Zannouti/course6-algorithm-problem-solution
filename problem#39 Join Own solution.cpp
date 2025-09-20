
#include <iostream>
#include<string>
#include <vector> 
using namespace std;



vector <string> join1()
{
    vector <string> names = {"Ali", "Sara", "Mohammed"};
    
    return names ;
}


int main()
{
    vector <string>  PrintNams =  join1();
    for(int i = 0; i < PrintNams.size();i++)
    {
        cout << PrintNams[i];
        if(i < PrintNams.size()-1)
        {
       cout <<" ";
        }
        
    }

    return 0;
    
}