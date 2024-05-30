#include<iostream>
using namespace std;
void fun()
{
    cout<<"hi i am fun with 0 args"<<endl;
}
void fun(int a)
{
    cout<<"hi i am fun with 1 int args"<<endl;
}
void fun(char a)
{
    cout<<"hi i am fun with 1 char args"<<endl;
}
void fun(string a)
{
    cout<<"hi i am fun with 1 string args"<<endl;
}
void fun(int a,int b)
{
    cout<<"hi i am fun with 2 args"<<endl;
}
void fun(string a,int b)
{
    cout<<"hi i am fun with 2 string,int args"<<endl;
}
void fun(int a,string b)
{
    cout<<"hi i am fun with 2 int,string args"<<endl;
}
int main()
{
    fun(56,"hi");
  
    return 0;
}