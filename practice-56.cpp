//to find position at Nth term of a given series in an array!!
//1 ,1 ,2 ,3 ,4 ,9 ,8 ,27 ,16 ,81 ,32 ,243 ,64 ,729 ......
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{ 
    int N,term,value ;
     cout<<"ENTER POSITION TO FIND VALUE "<<endl;
     cin>>N;
     if(N%2 == 1 ) //for odd positions
     {
         term = (N+1)/2; //term is new position in odd series found using old position 
         value = pow(2, term -1 );
     }
     else //for even positions
     {
         term = (N/2); //term is new position in even series found using old position
         value = pow(3, term - 1);
     }   
     cout<<"TERM AT N POSITION IS = ... "<<value<<endl;
    return 0;
}  