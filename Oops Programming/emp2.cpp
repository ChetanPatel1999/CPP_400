#include<iostream>
using namespace std;
class emp
{
    string name;
    int id;
    public:
    void setdata();// method declartion
    void display();
};
void emp::setdata()// (::)scope resolution operator
{
       cout<<"enter emp name :";
       cin>>name;
       cout<<"enter emp id :";
       cin>>id;
}
 void emp::display()
    {
       cout<<"emp id : "<<id<<endl;
       cout<<"emp name : "<<name<<endl;
    }
int main()
{
 emp e1,e2;
 e1.setdata();
 e2.setdata();
 e1.display();
 e2.display();
    return 0;
}