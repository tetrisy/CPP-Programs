#include <iostream>

using namespace std;

bool checkTriangle(int a, int b, int c);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter length of 1st side: ";
    cin >> a;
    cout << "Enter length of 2nd side: ";
    cin >> b;
    cout << "Enter length of 3rd side: ";
    cin >> c;

    bool isTriangle = checkTriangle(a, b, c);

    if (isTriangle)
    {
        cout << "This is a valid triangle.\n";
    }
    else
    {
        cout << "This isn't a valid triangle.\n";
    }
}

bool checkTriangle(int a, int b, int c)
{
    int sum1 = a + b;
    int sum2 = b + c;
    int sum3 = a + c;
    bool isTriangle = false;

    if (sum1 > c)
    {
        if (sum2 > a)
        {
            if (sum3 > b)
            {
                isTriangle = true;
            }
        }
    }

    return isTriangle;
}