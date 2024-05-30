#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    void setdata(int a,int b)
    {
        real=a;
        image=b;
    }
    void display()
    {
       cout<<"complex number :"<<real<<" + "<<image<<"i"<<endl;
    }
    void sum(complex ob1)
    {
     int r=real+ob1.real;
     int i=image+ob1.image;
     cout<<"add of complex number :"<<r<<" + "<<i<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(12,6);
    c2.setdata(8,7);
    c1.display();
    c2.display();
    c1.sum(c2);
    return 0;
}