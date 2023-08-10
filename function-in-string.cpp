#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Goodnight";
    cout<<s1<<endl;
    s1.clear();    // use to clear the string
    cout<<s1<<endl;
    if(s1.empty())   // checking that string is empty or not
    {
        cout<<"String is empty"<<endl;
    }
    string s2="helloworld";
    s2.erase(3,2);  // here erase function is used and 3 is index from where we are starting and 2 is no. or words
    cout<<s2<<endl;
    //now its time to find the sub string 
    cout<<s2.find("wor")<<endl;   // it will return the index from which it is starting
    // its time to insert a string in a string
    string s3="hey";
    s3.insert(1,"lolo");
    cout<<s3<<endl;
    // printing single single character of the string
    string s4="hellosir";
    for(int i=0;i<s4.size();i++)
    {
        cout<<s4[i]<<endl;
    }
    // getting substring of a string 
    string s5="ramapathalogy";
    string ss=s5.substr(5,3); // here 5 is index number from where we want to get substring and 3 is length
    cout<<ss<<endl;
    return 0;
}