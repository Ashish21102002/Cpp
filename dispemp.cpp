#include <iostream>
using namespace std;
class Employee
{
private:
    string Name;
    string dept;
    int salary;
    string address;

public:
    void getdata();
    void putdata();
};
void Employee::putdata()
{
    cout << "Enter employee's name:" << endl;
    cin >> Name;
    cout << "Enter department:" << endl;
    cin >> dept;
    cout << "Enter salary:"
         << endl;
    cin >> salary;
    cout << "enter address of the employee" << endl;
    cin >> address;
}
void Employee::getdata()
{
    cout << "\n"
         << endl;
    cout << "Employee's Data:-" << endl;
    cout << "Name:" << Name << endl;
    cout << "dept.:" << dept << endl;
    cout << "Salary:" << salary << endl;
    cout << "address:" << address << endl;
}
int main()
{
    Employee myObj[2];
    for (int i = 0; i < 2; i++)
    {
        myObj[i].putdata();
    }
    for (int i = 0; i < 2; i++)
    {
        myObj[i].getdata();
    }
    return 0;
}
