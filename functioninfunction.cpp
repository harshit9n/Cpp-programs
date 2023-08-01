#include<iostream>
using namespace std;
void print(int a)
{
    cout<<"your answer is : "<<a<<endl;
    cout<<"And it is printed through the fumction \n";
}
int mul(int num1, int num2)
{
    int m=num1*num2;
    print(m);
    return m;
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int s=mul(a,b);
    cout<<"print through main "<<s<<endl;
    return 0;
}