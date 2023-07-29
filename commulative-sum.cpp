#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of arrays"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int series[n];
    series[0]=array[0];
    int max=0;
    for(int i=1;i<n;i++)
    {
        series[i]=series[i-1]+array[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if((series[j]-series[i])>max)
            {
                max=series[j]-series[i];
            }
        }
    }
    cout<<"maximum sum is :"<<max<<endl;
    return 0;
}