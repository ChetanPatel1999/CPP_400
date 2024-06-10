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
class child:private parent
{
     public :
     void childset(int a)
     {
       set(a); 
       display();
     }
};
class child2 :private child
{
    public:
    void child2display()
     {
        //display();//private member not inherite
     }
};

int main()
{
    child2 c1;
    //c1.childset(12);// its become private for child2 class
    c1.child2display();

    return 0;
}