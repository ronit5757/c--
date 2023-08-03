#include<iostream>
#include<iomanip>
using namespace std;
typedef struct employee 
{
    int eid;
    float salary;
    char language; //fields with differ datatypes are assigned
} ep; //this ep is short form of struct employee which is used using typedef
int main()
{
    ep ronit;
    ep sarthak;
    ep aditya;  //various emloyess are added
    ronit.eid =123;
    ronit.salary= 100000;
    ronit.language= 'c++';
    sarthak.eid=124;
    sarthak.salary= 19000;
    sarthak.language='java'; //entries are made for all fields
    cout<<"the salary of sarthak is \n"<<sarthak.salary<<endl;//print is done
    return 0;
}