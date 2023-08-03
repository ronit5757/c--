//#include<iostream>
//#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string to make lowercase # and uppercase * \n";
    getline(cin,str);
    for(int i= 0; i< str.length(); i++) //iteration for every character is done
    {
        if(str[i] >='A' && str[i] <  'Z')
        {
            str[i] ='*';
        }
        if(str[i] >= 'a' && str[i] <  'z')
        {
            str[i] = '#';
        }
    }  
    cout<<str; 
    return 0;  
}