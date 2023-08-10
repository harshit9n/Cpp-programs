#include<iostream>
using namespace std;
int main()
{
    string s1="Fam" , s2="ily" ,s3;
    s3=s1+s2;       //using third variable
    cout<<s3<<endl;
    s1.append(s2);     // or we can use s1+=s2  instead of append function
    cout<<s1<<endl;   //adding or shifting s2 to s1
    cout<<s1+s2<<endl;   //without adding or using third variable   !!! here some error occured because my s1 is now changed
    // Accessing single letter of the string
    cout<<s1[3]<<endl;

    //now we check the use of clear function 
    s1.clear();
    cout<<s1<<endl;
    return 0;
}