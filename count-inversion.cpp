#include<iostream>
using namespace std;
int countinversion(int arr[], int n)
{
    int inversion=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                inversion++;
            }
        }
    }
    return inversion;
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
    cout<<countinversion(arr,n)<<endl;
    return 0;
}