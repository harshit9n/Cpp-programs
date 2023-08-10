#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    //covert string to the integer 
    string m="234";
    int l=stoi(m);  //stoi means string to integer
    cout<<l+20<<endl;
    // convert integer to string
    int z=230;
    string ss= to_string(z);
    cout<<ss+"50"<<endl;
    // sorting of a string
    string m2="vibgyor";
    sort(m2.begin() , m2.end());
    cout<<m2<<endl;
    return 0;
}