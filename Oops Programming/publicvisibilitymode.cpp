#include<iostream>
using namespace std;
class parent
{
    protected:
    int num;
    public:
    void set(int a)
    {
        num=a;
    }
    void display()
    {
        cout<<"num = "<<num<<endl;
    }
};
class child:public parent
{

};
int main()
{
    child c1;
    c1.set(12);
    c1.display();

    return 0;
}