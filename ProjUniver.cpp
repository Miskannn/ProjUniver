#include <iostream>
using namespace std;

double findArea(double d)
{
    return (d * d) / 2.0;
}

int main()
{
    double d = 10;
    cout << (findArea(d));
    return 0;
}
