#include <iostream>
#include <iomanip>
using namespace std;
class testing
{
private:
    int roll_no[10];
    int marks[5];
    int j;

public:
    void initj(void){j=0;}
    void getmarks(void);
    void displaymarks(void);
};
void testing ::getmarks(void)
{
        cout << "ENTER ROLL_NO " << endl;
        cin >> roll_no[j];
        cout << "enter marks for roll no " << roll_no[j] << endl;
        cin >> marks[j];
        j++;
}
void testing ::displaymarks(void)
{ 
    for (int i = 0; i < j; i++)
    {
        cout << "the marks for roll_no " << roll_no[i] << " are = " << marks[i] << endl;
        cout << "****** \n";
    }
}
int main() 
{
    testing secC;
    secC.initj(); 
    secC.getmarks();
    secC.getmarks();
    secC.getmarks();
    secC.displaymarks();

    cout << "\n******THANKYOU*****\n";
    return 0;
} 