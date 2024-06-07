#include<iostream>
using namespace std;
class emp
{
    int id;
    string name;
    public:
    void setdataemp(int a,string s)
    {
        id=a;
        name=s;
    }
    void displayemp()
    {
        cout<<"emp name : "<<name<<endl;
        cout<<"emp id : "<<id<<endl;
    }
};
class programmer:public emp
{
   string lang;
   public:
   void setlang(string s)
   {
    lang=s;
   }
   void display()
   {
    displayemp();
    cout<<"emp language :"<<lang<<endl;
    cout<<"_____________________________"<<endl;
   }
};
int main()
{
   programmer p1;
   p1.setdataemp(101,"ram");
   p1.setlang("java");
   p1.display();
    return 0;
}