//print prime number between 1-100
#include<iostream>
#include<iomanip>
using namespace std;

bool checkprime(int n)
{
    for(int j=2; j<n; j++)
    {
        if(n%j == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"ENTER FINAL POSITION UNDER WHICH YOU WANT PRIME NUMBERS "<<endl;
    cin>>n;
    for(int i= 1; i<n; i++)
    {
        if(checkprime(i))
        {
            cout<< i <<setw(3);
        }
    }
    return 0;
}