#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    getdata()
    {
        // number = a;
        count++;
    }
    get_count(void)
    {
        cout << "count";
        cout << count << endl;
    }
};
int item::count;
int main()
{
    item a, b, c;
    a.get_count();
    b.get_count();
    c.get_count();
    cout << "after reading data:" << endl;
    a.getdata();
    a.get_count();
    b.getdata();
    b.get_count();
    c.getdata();
    c.get_count();
    return 0;
}
