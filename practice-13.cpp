//Armstrong number is the one which has sum of cube of each digit equal to same number 
// example... 153(1 + 125 + 27 = 153), 370 , 371
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,n,r, sum=0;
    cout<<"ENTER NUMBER TO CHECK ARMSTRONG OR NOT.. \n";
    cin>>n;
    x = n;
    while(n>0)
    {
        r = n%10;
        sum = sum + r*r*r;
        n = n/10;
    }
    if(sum == x)
    {
        cout<<"ARMSTRONG "<<endl;
    }
    else 
    {
        cout<<"NOT AN ARMSTRONG "<<endl;
    }
    return 0;
}  