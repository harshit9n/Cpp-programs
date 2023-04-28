#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,num;
    cout<<"enter the number"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=num-i;j>0;j--)
        {
            cout<<" ";
        }
        for(m=num-i;m>0;m--)
        {
            cout<<" ";
        }
        for(l=1;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=num;i++)
    {
        for(j=i-1;j<num;j++)
        {
            cout<<"*";
        }
        for(k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(l=1;l<i;l++)
        {
            cout<<" ";
        }
        for(m=i-1;m<num;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}