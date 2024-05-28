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
 static int totalstd;
 public:
 void setstudentdata(string s, int a,float b)
 {
   totalstd++;
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
 static void displaytotalresult()
 {
  cout<<"total result of students in pass and fail ..."<<endl;
  cout<<"total pass : "<<totalpass<<endl;
  cout<<"total fail : "<<totalfail<<endl;
  cout<<"_________________________________"<<endl;
 }
  static void displaytotalstd()
 {
  cout<<"total student in class : "<<totalstd<<endl;
  cout<<"_________________________________________"<<endl;
 }
 static void classinfo()
 {
  cout<<"provide info about methods"<<endl;
 }
};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{
 student s1,s2,s3;
 s1.setstudentdata("megha",1001,89.67);
 s2.setstudentdata("muskan",1002,12.67);
 s3.setstudentdata("kirtee",1003,13.67);
 s1.displaystudentresult();
 s2.displaystudentresult();
 s3.displaystudentresult();
 student::displaytotalresult();
 student::displaytotalstd();
 student::classinfo();
    return 0;
}