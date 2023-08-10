#include<iostream>
using namespace std;
class shape
{
    public:
    int a,b;
    void get_data(int m,int n)
    {
        a=m;
        b=n;
    }
};
class ractangle :public shape
{
    public:
    int area()
    {
        return a*b;
    }
};
class rect_perimeter:public shape
{
    public:
    int perimeter()
    {
        return 2*(a+b);
    }
};
int main()
{
    ractangle r;
    rect_perimeter p;
    cout<<"enter the length and breath"<<endl;
    int q,w;
    cin>>q>>w;
    r.get_data(q,w);
    int l=r.area();
    cout<<" Area: "<<l<<endl;
    p.get_data(q,w);
    l=p.perimeter();
    cout<<"Perimeter: "<<l<<endl;
    return 0;
}