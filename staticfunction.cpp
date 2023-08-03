#include<iostream>
#include<iomanip>
using namespace std;

/*inline*/ int product(int a, int b) //inline is a request to compiler that directly copy return value in main menu for multiple usage of same function but cant be used with static variables
{ //the compiler will decide to make function inline or not
    static int c = 0; // first the value is initialized
    c= c + 1; // then this value will be exectued and stored for next time
    return a*b + c;
}

int main()
{
    int x; int y;
    cout<<" ENTER VALUE OF X \n"<<endl;
    cin>>x;
    cout<<" ENTER THE VALUE OF Y \n"<<endl;
    cin>>y;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    cout<<" THE PRODUCT X AND Y WITH INCREMENT IS \n"<<product(x,y)<<endl;
    return 0;
}