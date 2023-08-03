//ax2 + bx + c  QUADRATIC EQUATION
// discriminant  d = root(b2 - 4ac)
//d > 0;; root 1 = (-b + d )/2a
//d > 0;; root 2 = (-b - d )/2a
//d = 0;; root 1 & 2 = (-b)/2a
//d<0 ;; imaginaery roots r1 = [-b/2a]  +i[-root(d) / 2a] 
//d<0 ;; imaginaery roots r2 = [-b/2a]  -i[-root(d) / 2a] 

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c;
    int d;
    char x; 
    int root1, root2;
    cout<<"ax2 + bx + c \n";
    cout<<"enter a \n";
    cin>>a;
    cout<<"enter b \n"; 
    cin>>b; 
    cout<<"enter c \n";
    cin>>c; 
    cout<<a<<"x2 + "<<b<<"x + "<<c <<endl;

    d= (b*b)- 4*a*c;

    if(d>0) 
    {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        cout<<"root 1 is  " <<root1<<endl; 
        cout<<"root 2 is  " <<root2;
    }
    else if(d == 0)
    {
        cout<<"WE HAVE EQUAL ROOTS \n";
        root1 = (-b) /(2*a);
        cout<<"root 1 is  " <<root1<<endl;
        cout<<"root 2 is  " <<root1;
    }
    else if(d<0)
    {
       float x= -(b)/(2*a);
        cout<<"root 1 is  " <<x << "+ i"<<sqrt((-d)/(2*a))<<endl;
        cout<<"root 2 is  " <<x << "- i"<<sqrt((-d)/(2*a));
    } 
    return 0;
} 