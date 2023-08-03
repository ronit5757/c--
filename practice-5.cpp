//check vowel using switch case

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char x;
    char a;
    cout<<"*****"<<
    "ENTER AN ALPhABET TO CHECK IT IS VOWEL OR NOT"<<
    "***** \n";
    cin>>x;
    cout<<endl;
    switch(x)
    {
        case 'a':
        cout<<"it is vowel";
        break;
        case 'e':
        cout<<"vowel";
        break;
        case 'i':
        cout<<"it is vowel";
        break;
        case 'o':
        cout<<"it is vowel";
        break;
        case 'u':
        cout<<"it is vowel";
        break;

    default:
    cout<<"CONSTANT";


    }

    return 0;
}
