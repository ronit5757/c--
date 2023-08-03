// TO FIND SUM OF THE DIGITS OF A NUMBER 

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout<<"enter a number \n";
    cin>>n;
    while(n>0) //works till quoteint will not be zero(0)
    {
        r=n%10; //last digit will be stored in r
        sum = sum + r; // sum will be updated each time
        n=n/10; //(remaining digits of n ) will be obtained and updated
    }

    cout<<"SUM OF DIGITS OF is = "<<sum;
    return 0;
} 