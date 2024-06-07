#include<iostream>
using namespace std;
class student
{
    int rno;
    public:
    void setrno(int a)
    {
        rno=a;
    }
    void displayrno()
    {
        cout<<"rno of std :"<<rno<<endl;
    }
};
class marks:public student
{
    int hindi;
    int math;
    public:
    void setmarks(int a,int b)
    {
        hindi=a;
        math=b;
    }
    void displaymarks()
    {
        displayrno();
        cout<<"marks of Hindi : "<<hindi<<endl;
        cout<<"marks of math : "<<math<<endl;
    }
     int gethindi()
    {
        return hindi;
    }
     int getmath()
    {
        return math;
    }
};
class result:public marks
{
    public:
    void displayresult()
    {
        float per=((gethindi()+getmath())/200.0)*100;
        displaymarks();
        cout<<"percentage : "<<per<<endl;
        cout<<"__________________________"<<endl;;

    }
};

int main()
{
    result r1;
    r1.setrno(1001);
    r1.setmarks(40,60);
    r1.displayresult();
    return 0;
}