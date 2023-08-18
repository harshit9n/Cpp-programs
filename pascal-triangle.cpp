#include<iostream>
using namespace std;
int main()
{
    int N=6;
    int matrix[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            matrix[i][j]=0;
            if(i==j)
            {
                matrix[i][j]=1;
            }
            if(i>0 && j>0)
            {
                matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
            }
        }
        matrix[i][0]=1;
    }
    // for(int i=1;i<N;i++)
    // {
    //     for(int j=1;j<N;j++)
    //     {
    //         matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
    //     }
    // }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<matrix[i][j]<<" ";
            if(j>=i)
            {
                break;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
