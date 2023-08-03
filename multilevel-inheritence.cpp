#include <iostream>
#include <iomanip>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int r)
    {
        roll_number = r;
    }
    void get_rollnumber()
    {
        cout << "the roll number is = " << roll_number << endl;
    }
};
class marks : public student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void get_marks()
    {
        cout << "the marks in maths are = " << maths << endl;
        cout << "the marks in physics are = " << physics << endl;
    }
};
class result : public marks
{
    float percentage;

public:
    void display_result()
    {
        get_rollnumber();
        get_marks();
        cout << " OVER " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result r1;
    r1.set_rollnumber(1220278);
    r1.set_marks(85, 92);
    r1.display_result();
    return 0;
}