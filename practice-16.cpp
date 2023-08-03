////star pattern////
//*
//**
//***
//****
//*****
//******

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     int i,j,k;
     cout<<"enter equal number of rows and colums value \n";
     cin>>k;
     for(i=1;i<=k;i++)
     {
        for(j=1;j<=k;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<"";
            }
        }
        cout<<"\n";
     }
    return 0; 
}   