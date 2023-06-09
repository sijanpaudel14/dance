#include <iostream>
using namespace std;
int sum(int, int);
float sum(float, float, float);
int main()
{
    system("cls");
    int x, y, A;
    cout << "Enter two number ";
    cin >> x >> y;
    A = sum(x, y);
    cout << "The sum of " << x << " and " << y << " is " << A;

    float d, e, f,B;
    cout << "\nEnter three number ";
    cin >> d >> e >> f;
    B = sum(d, e, f);
    cout << "The sum of " << d << " and " << e << " and " << f << " is " << B;
}

int sum(int a, int b)
{
    return (a + b);
}
float sum(float a, float b, float c)
{
    return (a + b + c);
}