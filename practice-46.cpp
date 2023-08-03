#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER NUMBER OF NUMBERS YOU WANT TO ENTER "<<endl;
    cin>>n;
    int arr[n]; //array of size n is created 

    for(int i = 0; i<n ; i++)
    {
        cin>> arr[i]; // values at different positions are entered in an array
    }   
    int max;
    max = arr[0]; //initial max is set at position 0
    for(int i = 1; i<n ; i++)
    {
        if(max < arr[i]) 
        {
            max = arr[i]; // max will store next psotion value if it is greater than its previous position value   
        }
    } 
    cout<<"the m,aximum value among these njumbers is "<<max<<endl;
    return 0; 
}