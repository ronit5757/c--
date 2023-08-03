#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age.."<<setw(3)<<endl;
    cin>>age;
    cout<<endl;
    if((age < 18) && (age>0))    {
        cout<<"you are not invited"<<endl;
    }
    else if(age==18)
    {
        cout<<"you will get kid pass"<<endl;
    }
    else
    {
        cout<<"you are welcome"<<endl;
    }

    return 0;
}