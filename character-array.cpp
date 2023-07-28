#include<iostream>
using namespace std;
int main()
{
    char array[100];
    cout<<"enter your name :"<<endl;
    cin>>array;
    int s;
    cout<<"which space do you want:"<<endl;
    cin>>s;
    cout<<array[s-1];
    cout<<"\nFull name:  ";
    cout<<array;
    return 0;
}