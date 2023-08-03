// to check number if number of astric symbol * is greater or less than number of # in a string
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h> //for string methods
using namespace std;
int main()
{
    string str;
    cout << "ENTER STRING WITH SOME NUMBERS OF * AND # \n";
    getline(cin, str); // string in terms on line is taken as input
    int count1 = 0;    // iteration count initially zero for *
    int count2 = 0;    // for #
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '*') // iteration on string is done and each character will be checked... if at some position in iteration we recieve * , the count 1 value will be inccreased by 1.
        {
            count1++;
        }
        if (str[i] == '#')
        {
            count2++;
        } 
    }
    if (count1 > count2)
    {
        cout << "GREATER... * is more than # \n";
    }
    else if (count1 < count2)
    {
        cout << "SMALEER....* is less than # \n";
    }
    else 
    {
        cout << "EQUAL.... * and # are equal in numbers \n";
    }

    return 0;
}