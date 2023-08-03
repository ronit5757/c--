//reverse of a number's digits
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, r, sum=0;
    cout<<"enter number \n";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        sum = sum*10 + r;
        n= n/10;
    }
    cout<<"THE REVERSE OF DIGITS OF NUMBER THAT U ENTERED IS...\n"<<sum;
    return 0;
}