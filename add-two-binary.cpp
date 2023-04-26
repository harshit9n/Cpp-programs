#include<iostream>
using namespace std;
string sum(string n1,string n2)
{
    int s=n1.size();
    string rest;
    for(int i=s-1;i>=0;i--)
    {
        int r=n1[i]+n2[i];
        if(r==0 || r==1)
        {
            rest[i]=r;
        }
        else if(r==2)
        {
            rest[i]=0;
            n1[i-1]=n1[i-1]+1;
        }
        else if(r==3)
        {
            rest[i]=1;
            n1[i-1]=n1[i-1]+1;
        }
    }
    return rest;
}
int main()
{
    string bin1,bin2;
    cout<<"enter first binary number"<<endl;
    cin>>bin1;
    cout<<"enter second binary number"<<endl;
    cin>>bin2;
    string ans=sum(bin1,bin2);
    cout<<"Your sum is : "<<ans<<endl;
    return 0;
}