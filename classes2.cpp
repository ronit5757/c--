// nesting and classes
#include <iostream>
#include <iomanip>
using namespace std;
class binary
{
private:
    string s;

public:
    void read(void);
    void chck_bin(void); // functions are defined
    void display(void);
};
void binary ::read(void)
{
    cout << "enter a number \n";
    cin >> s;
}
void binary ::chck_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "\n NOT A BINARY NUMBER" << endl;
            exit(0);
        }
    }
}
void binary ::display(void)
{
    cout << "\n DISPLAYING YOUR NUMBER \n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.chck_bin();
    return 0;
}
