#include<iostream>
using namespace std;
class add
{
    public:
    void add1(int a,int b)
    {
        cout<<"sum = "<<(a+b)<<endl;
    }
};
class sub
{
    public:
    void sub1(int a,int b)
    {
        cout<<"sub = "<<(a-b)<<endl;
    }
};
class mul
{
    public:
    void mul1(int a,int b)
    {
        cout<<"mul = "<<(a*b)<<endl;
    }
};
class calculater:public add,public sub,public mul
{

};
int main()
{
    calculater c1;
    c1.add1(12,6);
    c1.sub1(78,9);
    c1.mul1(12,5);
    return 0;
}