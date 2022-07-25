#include<iostream>
using namespace std;
int sum (int x, int y)
{
    return x+y;
}
double sum(double x,double y)
{
    return x+y;
}

int main()
{
    int a,b;
    double c,d;
    cout<<"enter two integer numbers"<<endl;
    cin>>a>>b;
    cout<<"enter two double number"<<endl;
    cin>>c>>d;
cout<<"the sum of two integers:"<<sum(a,b)<<endl;
cout<<"the sum of two floats"<<sum(c,d)<<endl;
}