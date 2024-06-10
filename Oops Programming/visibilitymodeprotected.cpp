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
class child:protected parent
{
     public :
     void childset(int a)
     {
       set(a); 
     }
};
class child2 :public child
{
    public:
    void child2display()
     {
        display();
     }
};

int main()
{
    child2 c1;
    c1.childset(12);
    c1.child2display();

    return 0;
}