// two strings are said to be in anagram of they have same lenght, equal characters with different order
// eg--> ronitjaat and jaatronit are in anagram 

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h> //helps in sorting
using namespace std;
int main()
{
    cout << "CHECKING TWO STRINGS ARE IN ANAGRAM OR NOT \n";
    string str1;
    cout << "enter a string 1 \n";
    getline(cin, str1);
    string str2;
    cout << "enter a string 2\n";
    getline(cin, str2);
    int l1 = str1.length();
    int l2 = str2.length();
    if (l1 == l2)
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if (str1 == str2)
        {
            cout << "both are anagram \n"; 
        }
        else
        {
            cout << "not in anagram \n";
        }
    }
    else
    {
        cout << "not in anagram \n";
    }
    return 0;
}