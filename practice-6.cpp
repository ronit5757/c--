//vowels using if else

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char x;
    cout<<"enter any variable x "<<endl;
    cin>>x;
    cout<<endl;
    if(x =='a' ||x =='A' ||x =='i' ||x =='e' ||x =='o' ||x =='u' )
    {
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"constant"<<endl;
    }
    return 0;
} 