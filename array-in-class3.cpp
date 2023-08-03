#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    private:
        char name[20];
        int id;
        static int count; //it is 0 by default an its increment keeps count of number of objects added in class  #1
         
    public:
        void getdata(void);
        void displaydata(void);
        static void getcount(void) //this is static function which keeps record of only static values #2
        {
            cout<<"\n the value of count is  "<<count<<endl;
        } //needs to be defined here only
};
void employee :: getdata(void)  
{
    cout<<"enter name of employee \n";
    cin>>name;
    cout<<" enter id of employee \n";
    cin>>id;
    count ++;
};
void employee :: displaydata(void)
{   
    cout<<"\n the id of employee "<<name<<" is "<<id<<" with count number = "<<count<<endl;;
};
int employee :: count; //static varianble to be declared outside also #1

int main()
{
    //employee ronit, sarthak; //sarthak and ronit both are sharing common static variable with different increment values
   // ronit.getdata();
    //ronit.displaydata();
    //employee::getcount();  //#2
    //cout<<"\n******************\n";
    //sarthak.getdata();
    //sarthak.displaydata();
    employee fb[4]; //array method of displaying data of objects in class  
    for(int x=0; x< 4; x++)
    {
        fb[x].getdata();
        fb[x].displaydata();
        employee :: getcount();  
    }
   // employee::getcount();    //#2
    return 0;
}  