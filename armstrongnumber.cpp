#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number to check \n";
    cin>>num;
    int original=num;
    int arm=0;
    while(num>0)
    {
        int last;
        last=num%10;
        arm=arm+pow(last,3);
        num=num/10;
    }
    if(arm==original)
    {
        cout<<"Armstrong number \n";
    }
    else{
        cout<<"Your number is not armstrong number \n";
    }
    return 0;
}