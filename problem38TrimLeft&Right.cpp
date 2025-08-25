#include <iostream>
#include <string>
using namespace std;

 string leftTrim(string S1)
			{
				for(int i = 0; i < S1.length(); i++)
				{
					if(S1[i] != ' ')
					{
						return S1.substr(i,S1.length()-i);
					}
				}
				return "";
			}  
			
	string TrimRight(string S1)
	{
	    for(int i = S1.length() - 1 ; i >= 0  ; i--)
				{
					if(S1[i] != ' ')
					{
						return S1.substr(0,i+1);
					}
				}
				return "";
	}
	
	string TrimLifAndRight(string S1)
	{
	  return  leftTrim(TrimRight(S1));
	}
			


			int main()
			{
				string S1 = "        mohammed you are in write way be patient        ";
				cout << "left trim " << leftTrim(S1) << endl;
				cout <<" rightt trim" << TrimRight(S1) << endl ;
				cout <<" right trim & leftTrim  " << TrimLifAndRight(S1) << endl ;

				
				
				return 0;
			}
			
