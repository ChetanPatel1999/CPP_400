#include<iostream>
using namespace std;
class student
{
 //public:
 string name;//instance
 int rno;
 float per;
 static int totalpass;
 static int totalfail;
 public:
 void setstudentdata(string s, int a,float b)
 {
   name=s;
   rno=a;
   per=b;
 }
 void displaystudentresult()
 {
   cout<<"student result....."<<endl;
   cout<<"student name = "<<name<<endl;
   cout<<"student rno = "<<rno<<endl;
   cout<<"student per = "<<per<<endl;
   if(per>33)
   {
    cout<<"student : pass "<<endl;
    totalpass++;
   }
   else{
    cout<<"student : fail "<<endl;
    totalfail++;
   }
   cout<<"_________________________________"<<endl;
 }
 void displaytotalresult()
 {
  cout<<"total pass : "<<totalpass<<endl;
  cout<<"total fail : "<<totalfail<<endl;
  cout<<"_________________________________"<<endl;
 }
};
int student::totalpass=0;
int student::totalfail=0;
int main()
{
 student s1,s2,s3,s4;
 s1.setstudentdata("megha",1001,89.67);
 s2.setstudentdata("muskan",1002,12.67);
 s3.setstudentdata("kirtee",1003,13.67);
 s4.setstudentdata("jayesh",1004,23.56);
 s1.displaystudentresult();
 s2.displaystudentresult();
 s3.displaystudentresult();
 s4.displaystudentresult();
 s1.displaytotalresult();
    return 0;
}