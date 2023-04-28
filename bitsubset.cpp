#include<iostream>
using namespace std;
void subsets(int arr[], int size)
{
    for(int i=0; i<(1<<size); i++)
    {
        for(int k=0;k<size;k++)
        {
            if(i & (1<<k))
            {
                cout<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int arr[4]= {1,2,3,4};
    subsets(arr, 4);
    return 0;
}