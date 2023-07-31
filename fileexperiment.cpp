#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    string temp;
    in.open("files1.txt");
    string name="ramukaka";
    out.open("files1.txt");
    for(int i=1;i<=3;i++)
    {
        in>>temp;
        if(i==3)
        {
            out<<name;
        }
    }

    return 0;
}