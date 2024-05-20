#include<iostream>
using namespace std;
class student
{
 //public:
 string name;
 int rno;
 float per;
 public:
 void setstudentdata(string s, int a,float b)
 {
   name=s;
   rno=a;
   per=b;
 }
 void displaystudent()
 {
   cout<<"student information........"<<endl;
   cout<<"student name = "<<name<<endl;
   cout<<"student rno = "<<rno<<endl;
   cout<<"student per = "<<per<<endl;
   cout<<"_________________________________"<<endl;
 }
 
};
int main()
{
 student s1,s2,s3;
 s1.setstudentdata("megha",1001,89.67);
 s2.setstudentdata("muskan",1002,99.67);
 s3.setstudentdata("kirtee",1003,13.67);
 s2.displaystudent();
 s1.displaystudent();
 s3.displaystudent();
    return 0;
}