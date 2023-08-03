// REMOVAL OF VOWELS

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str;
    cout << "ENTER A STRING " << endl;
    getline(cin, str); // to print whole line but just a siongle word

    for (int i = str.length() - 1; i>=0; i--) // iteration for every word of string of certain length
    {
        cout<<str[i]; 
    }

    return 0;  
}  