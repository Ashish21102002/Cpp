#include<iostream>
using namespace std;
int reverse(int n)
{
    int rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;

}
int main()
{
int num,rever;
cout<<"enter any number"<<endl;
cin>>num;
rever=reverse(num);
cout<<"reverse of" <<num<< "is" <<reverse<< endl;
return 0;
}

