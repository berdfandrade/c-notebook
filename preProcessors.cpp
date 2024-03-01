#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    int a, b = 3;
    a = b;
    a += 2;
    cout << a;
    cout << NEWLINE;
};
