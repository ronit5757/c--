#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER \n";
    cin>>n;
    cout<<"THE FACTORS FOR "<<n<<" are \n"; 
    for(int i = 1; i <n; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<setw(3); 
        }
    }
    return 0;  
}