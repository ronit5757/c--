// dynamic initialization of objects using constructor!!
#include <iostream>
#include <iomanip>
using namespace std;

class bankdeposits
{
    int principal;
    int years;
    int interestrate;
    int returnvalue;

public:
    bankdeposits() {}
    bankdeposits(int p, int y, float r); // r=interest rate here is defined in format 0.05
    bankdeposits(int p, int y, int r);   // interest rate here is defined in 14% format
    void display();
};
bankdeposits::bankdeposits(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal; // we can also write returnvalue = 0;
    for (int i = 0; i <= y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
        // returnvalue += returnvalue*r;
    }
}

bankdeposits ::bankdeposits(int p, int y, int r)
{ 
    principal = p;
    years = y;
    interestrate = float(r) / 100; // typecasting of r int into r float
    returnvalue = principal;       // we can also write returnvalue = 0;
    for (int i = 0; i < y; i++)
    {
        returnvalue = (returnvalue * (1 + interestrate));
        // returnvalue += returnvalue*r;
    } 
}
void bankdeposits ::display(void)
{
    cout << "THE PRINCIPAL VALUE WAS " << principal << endl
         << "the number of years for which ammount is stored is " << years << " years" << endl
         << "interest rate on " << principal << " for per year is" << interestrate << endl
         << "and the return value is " << returnvalue << endl;
}
int main()
{
   // bankdeposits bd1, bd2, bd3;
    int p, y;
    float r; // for float type rate
    int R;   // for percentage rate

    cout << "FOR INTEREST RATE IN FLOAT VALUE!!!!!! " << endl;
    cout << "enter value of p y and r \n";
    cin >> p >> y >> r;
   bankdeposits bd1 = bankdeposits(p, y, r);
    bd1.display();

    cout << "FOR INTERESTRATE IN PERCENTAGE VALUE!!!!!" << endl;
    cout << "enter value for p y and R" << endl;
    cin >> p >> y >> R;
   bankdeposits bd2 = bankdeposits(p, y, R);
    bd2.display();

    cout << "\n **********EXECUTED SUCCESFULLY********** \n";
    return 0; 
} 