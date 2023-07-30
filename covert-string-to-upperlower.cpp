#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str= "DTfvyygvHGJcvjtFCvcghKHB";
    //coverting to UPPER case
    for(int i=0;i<=str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    // converting to Lower case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    //convert direct to upper or lower using transform function 
    string s="HBSDHBUHBhbgbgbhHGBhgbj";
    transform(s.begin(), s.end() , s.begin(), ::toupper);
    cout<<s<<endl;
    string s1="GBgvygvGVBygvbhIGYv";
    transform(s1.begin(), s1.end() ,s1.begin() ,::tolower);
    cout<<s1<<endl;
    return 0;
}