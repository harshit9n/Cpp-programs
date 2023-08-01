#include<iostream>
using namespace std;
int main()
{
    int i,j,num,k,pr=1;
    cout<<"enter the number";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<pr<<" ";
            pr++;
        }
        cout<<endl;
    }
    return 0;
}