// there is a base class A with data member a
// further there are classes C and B which are inheriting member data a from class A
// then there is a further class D which is inheritinhg data member from B AND C
// there arises ambiguity that class D will recieve data a from both B and C
// so we use virtual keyword while inheriting B and C so that further class D will get only one a but not multiple copy from both 
// this virtual keyword  assures class A that class B and C both will give data a only one time to class D
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class student 
{
protected:
    int roll_no;

public:
    void set_roll(int a)
    {
        roll_no = a;
    }
    void print_roll()
    {
        cout << "ROLL NUMBER IS = " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    int maths, physics;

public: // this public of test gets set_roll and print_roll in it from base class student and some additional methods are added
    void setmarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void displaymarks()
    {
        cout << "MARKS IN MATHS IS = " << maths << endl;
        cout << "MARKS IN PHYSICS IS = " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int football, cricket;

public: // this public of sports also gets set_roll and print_roll in it from base class student and some additional methods are added
    void setscore(int f, int c)
    {
        football = f;
        cricket = c;
    }
    void displayscore()
    {
        cout << "THE SCORE OF ROLL NUMBER " << roll_no << " IN FOOTBALL IS = " << football << endl;
        cout << "THE SCORE OF ROLL NUMBER " << roll_no << " IN cricket IS = " << cricket << endl;
    }
};
class result : public test, public sports
{
private:
    int total;

public:
    void settotal()
    {
        total = maths + physics + football + cricket;
    }
    int displaytotal()
    {
        cout << "THE TOTAL MARKS ARE = " << total << endl;
        return total;
    }
};
int main()
{
    int maths, physics, football, cricket, rollnumber;
    cout << "ENTER ROLL NUMBER OF STUDENT " << endl;
    cin >> rollnumber;
    cout << "enter marks in maths " << endl;
    cin >> maths;
    cout << "enter physics in maths " << endl;
    cin >> physics;
    cout << "ENTER SCORE IN FOOTBALL " << endl;
    cin >> football;
    cout << "ENTER SCORE IN CRICKET " << endl;
    cin >> cricket;
    result r1;
    r1.set_roll(rollnumber); //this is inherited one time only due to usage of virtual 
    r1.print_roll(); //this is inherited one time only due to usage of virtual  
    r1.setmarks(maths, physics);
    r1.displaymarks();
    r1.setscore(football, cricket);
    r1.displayscore();
    r1.settotal();
    r1.displaytotal();
    cout << "\n the wholesum total is " << 400 << endl;
    if (r1.displaytotal() < 250)
    {
        cout << "FAIL" << endl;
    }
    else
    {
        cout << "PASS";
    }
    return 0;
}  