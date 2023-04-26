#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    public:
    int roll;
    char gender;
    void getname(string s)
    {
        name=s;
    }
    void printinfo()
    {
        cout<<name<<"\t"<<roll<<"\t"<<gender<<endl;
    }
};
int main()
{
    student arr[5];
    for(int i=0;i<2;i++)
    {
        cout<<"enter the details of the "<<i+1<<" student"<<endl;
        cout<<"enter name:  ";
        string s;
        cin>>s;
        arr[i].getname(s);
        cout<<"enter roll no.  ";
        cin>>arr[i].roll;
        cout<<"enter gender:  ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<2;i++)
    {
        arr[i].printinfo();
    }
    return 0;
}