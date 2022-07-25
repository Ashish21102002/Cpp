#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    cout<<a<<"is the greatest numbers among three numbers";
    else if(b>=c && b>=a)
    cout<<b<<"is the greatest numbers among three";
    else
    cout<<c<<"is the greatest among the three numbers";
    return 0;

}