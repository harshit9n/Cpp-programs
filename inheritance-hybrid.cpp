#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void get_a()
    {
        cout<<"enter the value of A: "<<endl;
        cin>>a; 
    }
};
class B:public A
{
    public:
    int b;
    void get_b()
    {
        cout<<"Enter the value of B :"<<endl;
        cin>>b;
    }
};
class C
{
    public:
    int c;
    void get_c()
    {
        cout<<"enter the value of C: "<<endl;
        cin>>c;
    }
};
class D:public B, public C
{
    public:
    int d;
    void mul()
    {
        get_a();
        get_b();
        get_c();
        cout<<"Multiplication of A,B and C is : "<<(a*b*c)<<endl;
    }
};
int main()
{
    D solve;
    solve.mul();
    return 0;
}