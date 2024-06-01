//reference varible in cpp
#include<iostream>
using namespace std;
void fun(int &h)//int &h=a
{
    h=45;
}
int main()
{
    int a=12;
    int &b=a;
    cout<<a<<","<<b<<endl;//12 12
    a=45;
    cout<<a<<","<<b<<endl;//45 45
    b=90;
    cout<<a<<","<<b<<endl;//90 90
    cout<<(&a)<<","<<(&b)<<endl;
    fun(a);
    cout<<a<<","<<b<<endl;
    return 0;
}