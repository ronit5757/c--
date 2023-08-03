//palindrome number is the one that reads same in both direction
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x , n, r, sum = 0;
    cout<<"enter a number to check it is palindrome number ior not \n" ;
    cin>> n;
    x = n; //to check condition after reversal
    while(n>0)
    {
        r= n%10;
        sum = sum*10 + r;
        n = n/10;
    }
    if(sum == x)
    {
        cout<<"YES IT IS PALINDROME TYPE NUMBER \n ";
    }
    else
    {
        cout<<"NOO!! it is not palindrome type \n";
    }
    return 0;
} 