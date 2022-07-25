#include<iostream>
using namespace std;
class set
{
    int a,b;
    public:
    void input(void);
    void display(void);
    void largest(void);
};
int set::largest(void)
{
    if(a>b)
    return a;
    else
    return b;
}
void set::input(void)
{
    cout<<"input values of a and b"
    cin>>a>>b;
}
void set::display (void)
{
    cout<<"largestvalue="<<largest()<<"\n";

}
int main(){
set X;
X.input();
X.display();
return 0;
}
