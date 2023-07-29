#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    char gender;
    student()   //default constructor
    {
        cout<<"this is a default constructor"<<endl;
    }
    student(string s,int n,char m)  // parameterised constructor
    {
        cout<<"this is parameterised constructor"<<endl;
        name=s;
        roll=n;
        gender=m;
    }  //constructor
    student(student &s)
    {
        cout<<"this is Copy constructor"<<endl;
        name=s.name;
        roll=s.roll;
        gender=s.gender;
    }
    ~student()
    {
        cout<<"Destructor Called"<<endl;
    }
    bool operator == (student &a)
    {
        if(name==a.name && roll==a.roll && gender==a.gender)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main()
{
    student s("harshit",18,'M');
    cout<<s.name<<" "<<s.roll<<" "<<s.gender<<endl;
    student p;
    student m=s;
    cout<<m.name<<" "<<m.roll<<" "<<m.gender<<endl;
    if(m==s)
    {
        cout<<"Same user"<<endl;
    }
    else
    {
        cout<<"Different User"<<endl;
    }
    return 0;
}