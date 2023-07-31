#include<iostream>
using namespace std;
void dnf(int arr[], int n)     // this algorithm is done only for 0,1,2 these values;
{
    int low=0,mid=0,high=(n-1);
    while(mid<=high)
    {
        here:
        if(arr[mid]==0)
        {
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
            goto here;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
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
    dnf(arr,n);
    return 0;
}