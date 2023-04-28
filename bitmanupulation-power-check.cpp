#include<iostream>
using namespace std;
bool ispowerof2(int n)
{
    return (n && !(n&(n-1)));   //here of we type any number like 7= 0111 its n-1 will be 6=0110 its 
}                               //AND will not be zero and if we type 8=1000 its n-1 , 7= 0111 its AND 
int main()                     // will be zero
{
    cout<<ispowerof2(16)<<endl;
    return 0;
}