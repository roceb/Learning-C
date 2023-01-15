#include <iostream>
using namespace std;
int main()
{
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
                cout << a << b << c;
                return 0;
        }
        else if (a > b && b > c)
        {
                cout << c << b << a;
                return 0;
        }
        else if (a < b && a < c && c < b)
        {
                cout << a << c << b;
                return 0;
        }
        else if (b < a && a < c)
        {
                cout << b << a << c;
                return 0;
        }
        cout << b << c << a;
}