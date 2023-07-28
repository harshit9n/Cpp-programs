#include<iostream>
using namespace std;
int main()
{
    char a[100];
    cout<<"enter the word:"<<endl;
    cin>>a;
    int i=0;
    while(a[i] != '\0')
    {
        i++;
    }
    int r=i/2;
    int m=0;
    for(int l=0;l<r;l++)
    {
        if(a[l]==a[i-1-l])
        {
            m++;
        }
        else
        {
            break;
        }
    }
    if(m==r)
    {
        cout<<"word is palindrom!"<<endl;
    }
    else
    {
        cout<<"Word is not palindrom!"<<endl;
    }
    return 0;
}