#include<iostream>
using namespace std;
int setbit(int n,int pos)  //it changes the bit at given position and change it to the 1 either it is 1 or 0;
{
    return (n|(1<<pos));
}
int getbit(int n, int pos)  //it gives the bit present at that postion;
{
    return ((n&(1<<pos))!=0);
}
int clearbit(int n, int pos)
{
    int mask= ~(1<<pos);   //here mask is a 1's compliment of the position
    return n&mask;
}
int updatebit(int n, int pos ,int a)  // to update a bit at given position first we need to clear that bit
{                                    // here first number is original number
    int mask= ~(1<<pos);
    n=n&mask;
    return (n | (a<<pos));    
}
int main()
{
    //cout<<getbit(5,2)<<endl;
    //cout<<setbit(5,1)<<endl;
    //cout<<clearbit(5,0)<<endl;
    cout<<updatebit(5,0,0)<<endl; 
    return 0;
}