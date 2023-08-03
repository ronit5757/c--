#include<iostream>
#include<iomanip>
using namespace std;
class shop
{
    private :
        int itemid[100]; //maximum entries that can be made
        int itemprice[100];//maximum entries that can be made
        int counter;

    public :
        void initcounter(void){counter = 0;}
        void setprice(void);//stores item price for diffrent item id using counter ***setter
        void displayprice(void);// displays full list ****getter
};

void shop :: setprice(void)
    {
         cout<<"ENTER ID OF ITEM NO "<<counter+1<<endl;
         cin>>itemid[counter];
         cout<<"ENTER PRICE "<<endl;
         cin>>itemprice[counter];
         counter ++; //prevents overwriting of data in previous entries
    }

void shop :: displayprice(void)
    {
        for(int i=0; i<counter; i++)
        {
            cout<<"the price of item with item id "<<itemid[i]<<" is ="<<itemprice[i]<<endl;
        }
    } 
int main()
{
    shop dukaan; //object dukaan in class shop is created
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice(); 
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}