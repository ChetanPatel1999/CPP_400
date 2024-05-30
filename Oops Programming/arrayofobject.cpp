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
       cout<<"emp info : "<<endl;
       cout<<"emp id : "<<id<<endl;
       cout<<"emp name : "<<name<<endl;
    }
int main()
{
   int n;
   cout<<"enter emp number : ";
   cin>>n;
   emp e[n];
 int i;
 for(i=0;i<n;i++)
 {
    e[i].setdata();
 }
 for(i=0;i<n;i++)
 {
    e[i].display();
 }
 
    return 0;
}