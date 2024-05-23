#include<iostream>
using namespace std;
class emp
{
    string name;
    int id;
    public:
    void setdata(int,string);// method declartion
    void display();
};
void emp::setdata(int a,string s)// (::)scope resolution operator
{
        id=a;
        name=s;
}
 void emp::display()
    {
       cout<<"emp id : "<<id<<endl;
       cout<<"emp name : "<<name<<endl;
    }
int main()
{
 emp e1,e2;
 string s1;
 int x;
 cout<<"entre emp name : ";
 cin>>s1;
 cout<<"entre emp id : ";
 cin>>x;
 e1.setdata(x,s1);
  cout<<"entre emp name : ";
  cin>>s1;
  cout<<"entre emp id : ";
  cin>>x;
 e2.setdata(x,s1);
 e1.display();
 e2.display();
    return 0;
}