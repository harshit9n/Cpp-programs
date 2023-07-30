#include<iostream>
#include<limits.h>
using namespace std;
void countsort(int arr[] ,int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int position[max+1];
    for(int i=0;i<=max;i++)
    {
        position[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        position[arr[i]]+=1;
    }
    int sum=0;
    for(int i=0;i<=max;i++)
    {
        position[i]+=sum;
        sum=position[i];
    }
    int sortedarray[n];
    for(int i=(n-1);i>=0;i--)
    {
        int element=arr[i];
        position[element]--;
        sortedarray[position[element]]=element;
    }
    for(int i=0;i<n;i++)
    {
        cout<<sortedarray[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"enter the terms of the array\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    countsort(arr,n);
    return 0;
}