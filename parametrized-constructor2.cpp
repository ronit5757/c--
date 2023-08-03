#include <iostream>
#include <iomanip>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b) // parametrized constructor is created
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "the point is (" << x << "," << y << ") \n";
    }

    friend point distance (point M,point N );
};

point distance (point M, point N)
{
   //int M =( M.x - N.x);
   //int N = (M.y - N.y);
    cout<< "the distance is ("<< M.x - N.x <<","<< M.y-N.y<<")"; 
}


int main()
{
    cout << "this is first point \n";
    point p(2, 5);
    p.display();

    cout << "\nthis is second point\n";
    point q(3, 4);
    q.display();

    distance (p,q); 
}