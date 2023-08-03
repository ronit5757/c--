#include <iostream>
#include <iomanip>
using namespace std;
class shopitem
{
    int id, price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void displaydata()
    {
        cout << "THE ID OF ITEM IS " << id << endl;
        cout << "THE PRICE OF ITEM IS " << price << endl;
    }
};
int main()
{
    int size;
    cout << "ENTER NUMBER OF ITEMS IN A SHOP " << endl;
    cin >> size;
    shopitem *ptr = new shopitem[size]; // array of objects of class shopitem is created and ptr will store address of each object created
    shopitem *ptrtemp = ptr;            // address of pointer ptr is assigned to new pointer ptr because the original ptr cant be used as it will be done ptr++
    int i, p, q;
    for (i = 0; i < size; i++) // this is for setdata of ptr at different objects
    {
        cout << "ENTER ID OF ITEM " << i + 1 << endl;
        cin >> p;
        cout << "ENTER price OF ITEM " << i + 1 << endl;
        cin >> q;
        ptr->setdata(p, q); // data will be set for initial pointer position storing address of object 1
        ptr++;              // as the pointer increasaes the data for more objects will be stored
    }
    for (i = 0; i < size; i++) // this is for getdata of ptrtemp at different positions with the same addresses of objects in ptr
    {
        cout << "FOR ITEM NUMBER " << i + 1 << endl;
        ptrtemp->displaydata(); // data will be displayed for initial pointer position storing address of object 1
        cout<<"************************************* \n";  
        ptrtemp++;
    }
    return 0;  
}