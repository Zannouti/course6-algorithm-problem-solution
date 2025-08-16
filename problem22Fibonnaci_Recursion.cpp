#include <iostream>
#include<iomanip>
using namespace std;

void FibonacciSeriesByRecursion(int prev1, int prev2,short length )
{
    short FibonnacciNumber = 0;
    if(length > 0)
    {
         FibonnacciNumber = prev1 + prev2;
           cout << FibonnacciNumber <<"  ";
           prev2 = prev1;
           prev1 = FibonnacciNumber; 
            FibonacciSeriesByRecursion(prev1,prev2,length-1);
    }
}

int main()
{
    cout << "1  ";
   FibonacciSeriesByRecursion(1,0,10);
    return 0;
}