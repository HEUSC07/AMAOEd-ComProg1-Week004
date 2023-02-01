#include <iostream>
using namespace std;

int main()
{
    float π, A;
    int a, b;
    π = 3.14, a = 6, b = 4;

    cout << "Minor axis of ellipse: " << b << endl;
    cout << "Major axis of ellipse: " << a << endl;
    A = π * a * b;

    cout << A << "=" << π << "*" << a << "*" << b;

    return 0;
}