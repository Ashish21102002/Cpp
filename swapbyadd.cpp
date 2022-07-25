#include<iostream>
using namespace std;
void swapnum(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int firstnum=10;
    int secondnum=20;
    cout<<"before swap: " << "\n";
    cout<<firstnum<<secondnum<< "\n";
    swapnum(firstnum,secondnum);
    cout<<"after swap" << "\n";
    cout<<firstnum<< secondnum<< "\n";
    return 0;
}