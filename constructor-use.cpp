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
};
int main()
{
    student s("harshit",18,'M');
    cout<<s.name<<" "<<s.roll<<" "<<s.gender<<endl;
    student p;
    student m=s;
    cout<<m.name<<" "<<m.roll<<" "<<m.gender<<endl;
    return 0;
}