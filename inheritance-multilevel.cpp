#include<iostream>
using namespace std;
class living
{
    public:
    void eating()
    {
        cout<<"Eating ...."<<endl;
    }
};
class dog:public living
{
    public:
    void voice()
    {
        cout<<"Barking ...."<<endl;
    }
};
class babydog: public dog
{
    public:
    void baby()
    {
        cout<<"Weeping ...."<<endl;
    }
};
int main()
{
    babydog b1;
    b1.baby();
    b1.voice();
    b1.eating();
    return 0;
}