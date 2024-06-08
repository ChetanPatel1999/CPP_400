#include<iostream>
using namespace std;
class base
{
    protected:
    int id;
    public:
    void setid(int a)
    {
        id=a;
    }
    void display()
    {
        cout<<"id = "<<id;
    }
};
class child:public base
{
 public:
 void show()
 {
  cout<<id;
 }
};
int main()
{
   child o1;
   //o1.id=90;
   o1.setid(12);
   o1.show();
    return 0;
}