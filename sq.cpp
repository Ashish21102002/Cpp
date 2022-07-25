// find the cube and sq of a fun using incline function
#include <iostream>
using namespace std;
inline int square(int i)
{
    return i * i;
}
inline int cube(int j)
{
    return j * j * j;
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << "square of " << num << " is: " << square(num) << endl;
    cout << "cube of " << num << " is"<< cube(num) << endl;
    return 0;
}
