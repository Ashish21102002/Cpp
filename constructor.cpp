#include <iostream>
using namespace std;
class student
{
    int rollno;
    string name;

public:
    student()
    {
        cout << "enter roll number of the students" << endl;
        cin >> rollno;
        cout << "enter name:" << endl;
        cin >> name;
    }
    void display()
    {
        cout
            << "\n"
            << endl;
        cout << "displaying data" << endl;
        cout << "\n"
             << endl;
        cout << "roll no" << rollno << endl;
        cout << "name" << name
    }
};
<< endl;

int main()
{
    student s;
    s.display();
    return 0;
}