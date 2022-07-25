#include <iostream>
using namespace std;
int main()
{
    cout << "enter the number to find factorial" << endl;
    void factorial();
    factorial();
    return 0;
}
void factorial()
{
    int fact = 1, n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "the factorial of " << n << " is " << fact;
}