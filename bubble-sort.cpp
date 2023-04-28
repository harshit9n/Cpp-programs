#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the legth of the array"<<endl;
    int n;
    cin>>n;
    int array[n],s=n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<s-1;k++)
        {
            if(array[k]>array[k+1])
            {
                int temp=array[k];
                array[k]=array[k+1];
                array[k+1]=temp;
            }
        }
        s--;
    }
    for(int x=0;x<n;x++)
    {
        cout<<array[x]<<" ";
    }
    return 0;
}