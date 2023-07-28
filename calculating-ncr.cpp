#include<iostream>
using namespace std;
int fact(int num)
{
    int factorial=1;
    for(int i=2;i<=num;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n,r;
    cout<<"enter the value of n and r for nCr"<<endl;
    cin>>n>>r;
    int res=fact(n)/(fact(n-r)*fact(r));
    cout<<n<<"C"<<r<<" is : "<<res<<endl;
    return 0;
}