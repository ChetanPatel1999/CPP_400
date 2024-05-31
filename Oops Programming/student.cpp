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
 student(string s, int a,float b)
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
   cout<<"_________________________________________"<<endl;

 }
 static void avarage(student obj1,student obj2)
 {
  float avg=(obj1.per+obj2.per)/2.0;
  cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" = "<<avg<<endl;
  cout<<"_________________________________________"<<endl;
 }
 static void avarage(student obj1,student obj2,student obj3)
 {
  float avg=(obj1.per+obj2.per+obj3.per)/3.0;
  cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" = "<<avg<<endl;
  cout<<"_________________________________________"<<endl;
 }
  static void avarage(student obj1,student obj2,student obj3,student obj4)
 {
  float avg=(obj1.per+obj2.per+obj3.per+obj4.per)/4.0;
  cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" and "<<obj4.name<<" = "<<avg<<endl;
  cout<<"_________________________________________"<<endl;
 }
};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{

 student s1("megha",1001,89.67);
 student s2("muskan",1002,12.67);
 student s3("kirtee",1003,13.67);
 student s4("bhupendra",1004,10.78);
 s1.displaystudentresult();
 s2.displaystudentresult();
 s3.displaystudentresult();
 s4.displaystudentresult();
 student::displaytotalresult();
 student::displaytotalstd();
 student::classinfo();
 student::avarage(s1,s2);
 student::avarage(s1,s3);
 student::avarage(s2,s3);
 student::avarage(s1,s2,s3);
 student::avarage(s1,s2,s4);
 student::avarage(s1,s2,s3,s4);
    return 0;
}