#include <iostream>
#include<iomanip>
using namespace std;

void FibonacciSeries(short length)
{
    short prev1 = 1;
    short prev2 = 0;
    short FibonnaciNumber = 0;
    cout << "1  ";
    for(short i = 2; i <= length ;i++ )
    {
           FibonnaciNumber = prev1 + prev2;
           cout << FibonnaciNumber <<"  ";
           prev2 = prev1;
           prev1 = FibonnaciNumber; 

    }
    
}

int main()
{
   FibonacciSeries(10);
    return 0;
}