#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter total rupees";
    cin >> a;
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0; // HERE N REPRESENT no. OF NOTES
    if (a >= 2000)
    {
        n2000 = a / 2000;
        a = a - (n2000 * 2000);
    }
    if (a >= 500)
    {
        n500 = a / 500;
        a = a - (n500 * 500);
    }
    if (a >= 200)
    {
        n200 = a / 200;
        a = a - (n200 * 200);
    }
    if (a >= 100)
    {
        n100 = a / 100;
        a = a - (n100 * 100);
    }
    if (a >= 50)
    {
        n50 = a / 50;
        a = a - (n50 * 50);
    }
    if (a >= 20)
    {
        n20 = a / 20;
        a = a - (n20 * 20);
    }
    if (a >= 10)
    {
        n10 = a / 10;
        a = a - (n10 * 10);
    }
    if (a > 5)
    {
        n5 = a / 5;
        a = a - (n5 * 5);
    }
    if (a > 2)
    {
        n2 = a / 2;
        a = a - (n2 * 2);
    }
    if (a >= 1)
    {
        n1 = a / 1;
        a = a - (1 * 1);
    }
    int totalnotes = n2000 + n500 + n200 + n100 + n50 + n20 + n10 + n5 + n2 + n1;
    cout << totalnotes;
    return 0;
}