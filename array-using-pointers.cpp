#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;  //default stores the adress of first element and it is constant never be changed
    int *ptr=arr;
    // for (int i=0;i<4;i++)
    // {
    //     cout<<*ptr<<endl;
    //     *ptr++;
    // }
    for(int i=0;i<4;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
}