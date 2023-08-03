#include<iostream>
#include<iomanip>
using namespace std;

//void swap(int a, int b){
//    int temp= a;
//    a=b;
//    b=temp;
//} this function will start and terminated without storingf values in memory
//************************// 

void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;    //the addresses of all pointers are swapped and stored in memory
}
int main()
{
    int x; int y;
    cout<<"enter x \n";
    cin>>x;
    cout<<"enter y \n";
    cin>>y;
    cout<<"the original value of x and y is = "<<x<<setw(4)<<y<<endl;

    //swap(x , y);  this will not work

    swappointer(&x, &y);
    cout<<"the swaped values is \n"<<x<<setw(4)<<y<<endl; 


    return 0;
}