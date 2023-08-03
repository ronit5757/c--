//number prime or not prime

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n; int i;
    cout<<"ENTER NUMBER "<<endl;
    cin>>n;

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            cout<<"NON PRIME "<<endl;
            break;
        }
        else 
        {
            cout<<"PRIME";
            break;
        }
    }

    return 0;
}