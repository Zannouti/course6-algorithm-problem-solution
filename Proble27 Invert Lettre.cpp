#include iostream
#include cctype  for isupper, tolower, toupper
using namespace std;

char ReadChar() {
    char Ch1;
    cout  Please Enter a Charactern;
    cin  Ch1;
    return Ch1;
}

char InvertLetterCase(char ch) {
    return isupper(ch)  ? tolower(ch) : toupper(ch);
}

int main() {
    char Ch1 = ReadChar();
    cout  nChar after inverting casen;
    cout  InvertLetterCase(Ch1)  endl;
        {
}
