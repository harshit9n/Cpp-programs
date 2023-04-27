#include<iostream>
#include<cmath>
using namespace std;
int dec(string mr)
{
    int sum=0;
    int m=mr.size();
    for(int i=0;i<m;i++)
    {
        int sum=sum+(pow(2,i)*mr[m-1-i]);
    }
    return sum;
}
int main()
{
    string str;
    cout<<"Enter the number"<<endl;
    cin>>str;
    int run=dec(str);
    cout<<"your decimal is: "<<run;
    return 0;
}