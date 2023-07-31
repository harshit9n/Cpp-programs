#include<iostream>
using namespace std;
int fib(int n)
{
    int t1=0;
    int t2=1;
    int next;

    for(int i=1;i<=n;i++)
    {
        next=t1+t2;
        cout<<" "<<t1;
        t1=t2;
        t2=next;
    }
}
int main()
{
    int num;
    cout<<"enter the number you want to check fibonacci series \n";
    cin>>num;
    fib(num);
    return 0;
}