// REMOVAL OF VOWELS

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string str;
    cout << "ENTER A STRING " << endl;
    getline(cin, str); // to print whole line but just a siongle word

    for (int i = 0; i < str.length(); i++) // iteration for every word of string of certain length
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') // vowels at every word are checked
        {
            continue; // breaks the current iteration and moves to next iteration
        }
        else
        {
            cout << str[i];
        }
    }

    return 0;  
} 