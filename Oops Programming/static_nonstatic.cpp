#include<iostream>
using namespace std;
class demo
{
    int a,b;// non static;
    static int c,d;//static
    public:
    void setdata(int r,int s,int t,int u)
    {
        a=r;
        b=s;
        c=t;
        d=u;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
};
int demo::c;
int demo::d;
int main()
{
    demo d1,d2,d3;
    d1.setdata(12,13,111,222);
    d2.setdata(14,15,333,444);
    d3.setdata(16,17,555,666);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}