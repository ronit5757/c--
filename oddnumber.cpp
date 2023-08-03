// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     int a,b,c;
//     cout<<"enter number 1"<<endl;
//     cin>>a;
//     cout<<"enter number 2"<<endl;
//     cin>>b;
//     cout<<"enter number 3"<<endl;
//     cin>>c;
//     cout<<endl;
//     if((a % 2 != 0) && (a >=0))
//     {
//         cout<<a<< " is odd "<<endl;
//     }
//     else if((b%2 != 0) && (b>=-0))
//     {
//         cout<<b<<" is odd "<<endl;
//     }
//     else if((c%2 != 0) && (c>=0))
//     {
//         cout<<c<<" is odd "<<endl;
//     }
//     else
//     {
//         cout<<"there is no odd number"<<endl;
//     }

//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,a;
    cout<<"enter number under which u want odd numbers"<<endl;
    cin>>n;
    for(a=0; a<=n-1; a++)
    {
        if(a%2!=0){
            cout<<a<<" is odd"<<endl;
        }
    }

    return 0;
}