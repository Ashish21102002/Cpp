#include<iostream>
using namespace std;
int main()
{
   int a,b;
   int n;
   cout<<"enter two numbers to perform the arithmatic operation"<<endl;
   cin>>a>>b;
   cout<<"enter your choice"<<endl ;
   cout<<"1.addition"<<endl"3.multiplication"<<endl"4.division"<<endl;
   switch (n)
   {
   case 1:
   cout<<"the sum of" <<a<< "and" <<b<<" is "<<a+b<<endl;
    break;
case 2:
cout<<"the substraction of"<<a<< "and" <<b<< "is" <<a-b<<endl;
break;
default:
cout<<"error";

    break;
   }
}