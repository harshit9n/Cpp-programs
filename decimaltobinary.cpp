#include<iostream>
using namespace std;
int main ()
{
    int num,bin[50];
    int m;
    cout<<"enter the number"<<endl;
    cin>>num;
    for(int k=0;k<50;k++)
        {
            int rem=num%2;
            num=num/2;
            bin[k]=rem;
            m++;
            if(num==1)
            {
                bin[k+1]=1;
                break;
            }
        }
        int binary[50];
        for(int x=0;x<=m;x++)
        {
            binary[x]=bin[m-x];
        }
        for(int k=0;k<=m;k++)
        {
            cout<<binary[k];
        }
    return 0;
}