#include<iostream>
#include<iomanip>
using namespace std;

//default arguements are the vlues that we get from function even if we dont enter any value in main 

float moneyReceived(int initial, float factor=1.04)
{
    return initial*factor;
}

int main()
{
    int x; 
    cout<<"enter your initial salary \n";
    cin>>x;
    if (x < 200000)
    {
        cout<<"your initial salary is "<<x<<" and after increment is = "<<moneyReceived(x)<<endl;
    } //here we not provided factor and we will get default value as factor
    else
    {   
        cout<<"!!!!!!VVVIIIIPPPP!!!!!!!"<<endl;
        cout<<" you are VIP with initial salary "<<x<<" and after increment is = "<<moneyReceived(x, 1.1)<<endl;
    }
    return 0;
} // if a const is added in functions main int declarations, we cant accidently change that constant value defined...