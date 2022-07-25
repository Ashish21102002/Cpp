#include<iostream>
using namespace std;
class Marks
{
    private:
    int a,b;
    public:
    void getdata();
    void displaydata();

};
void Marks::getdata()
{
    cout<<"enter ,1st subject Marks";
    cin>>a;
    cout<<"enter the 2nd subject Marks";
    cin>>b;
    }
    void Marks::displaydata()
    {
        cout<<"1st subject mark"<<a<<endl;
        cout<<"2nd sub mark"<<b;

    }
    int main()
    {
        Marks x;
        x.getdata();
        x.displaydata();
        return 0;
    }