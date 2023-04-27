#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int l=0,h=n;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            l=mid;
        }
        else{
            h=mid;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements int sorted form"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be found"<<endl;
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}