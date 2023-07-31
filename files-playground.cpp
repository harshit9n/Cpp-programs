#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // string st1="i am here bro";
    // string st2;
    // ofstream out("files1.txt"); // for input in the files or sending data to the files.
    // out<<st1;
    // ifstream in("files1.txt");  //for output from the files or taking input from the files.
    // getline(in,st2);
    // cout<<st2;
    // eof means end of file

    ofstream omp;
    omp.open("files1.txt");
    omp<<"this is me \n";
    omp<<"this is new line bro";
    omp.close();

    ifstream nm;
    string m;
    nm.open("files1.txt");
    while(nm.eof()==0)
    {
        getline(nm , m);
        cout<<m<<endl;
    }
    nm.close();
    return 0;
}