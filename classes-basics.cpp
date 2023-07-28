#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    char gender;
};
int main()
{
    student s1;
    cin>>s1.name;
    cin>>s1.roll;
    cin>>s1.gender;
    cout<<s1.name<<endl<<s1.roll<<endl<<s1.gender;
    return 0;
}