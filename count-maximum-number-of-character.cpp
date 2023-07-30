#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="ahbsgbuhaeeegndhgegkmrjeeb";
    int arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    for(int j=0;j<s.size();j++)
    {
        arr[s[j]-'a']++;
    }
    int max=0;
    char ans ='a';
    for(int i=0;i<26;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            ans= i+'a';
        }
    }
    cout<<max<<endl;
    cout<<ans<<endl;
    return 0;
}