
#include <iostream>
using namespace std;

char ReadChar() {
    char Ch1;
    cout << "Please Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}

bool isVowel(char letter)
{
    letter = tolower(letter);
    return ((letter == 'a' || letter == 'o'|| letter == 'i'||letter == 'e'||letter == 'o'));
    
}

int main()
{
    char Ch1 = ReadChar();
    
    if(isVowel(Ch1)){
       cout <<"\nYES Letter \'"<< Ch1 <<"\' is vowel"; 
    } else {
        cout << "\n NO Letter \' " << Ch1 <<"\' is not vowel";
    }
    
    return 0;
}