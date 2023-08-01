#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int r=a+b;
    return r;
}
int main()
{
    int n1,n2;
    cout<<"enter two numbers "<<endl;
    cin>>n1>>n2;
    int ans=sum(n1,n2);
    cout<<"your sum is :"<<ans<<endl;
    return 0;
}