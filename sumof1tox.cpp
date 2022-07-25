#include<iostream>
using namespace std;
int main()
{
    int count=1;
    int sum=0;
    int val;
cout<<"enter the num to which you want to obtain the addition"<<endl;
cin>>val;
while(count<=val)
{
sum+=count;
count=count+1;
}
cout<<"the sum of 1 to "<<val <<"is "<<sum;
return 0;
}