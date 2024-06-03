#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"constructor is called"<<endl;
    }
    ~demo()
    {
       cout<<"destructor is called"<<endl;
    }
};
int main()
{
    demo d1,d2;
    cout<<"inside main fuction"<<endl;
    {
       demo d3; 
       cout<<"inside block"<<endl;
    }
    cout<<"after block"<<endl;
    return 0;
}