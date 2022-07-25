#include <iostream>
using namespace std;
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int num1, num2;
    cout << "enter two integer to multiply " << endl;
    cin >> num1 >> num2;
    cout << num1 << " multiplied by " << num2 << " is " << multiply(num1, num2) << endl;
    return 0;
}