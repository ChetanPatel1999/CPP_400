//constructor in cpp
#include<iostream>
using namespace std;
class demo
{
 public:
 demo()
 {

 }
  demo(int a)
 {
  cout<<"1 arg constructor called"<<endl;
 }
  demo(int a,int b)
 {
   cout<<"2 arg constructor called"<<endl;
 }
  demo(int a,int b,int c)
 {
   cout<<"3 arg constructor called"<<endl; 
 }
 
};
int main()
{
    demo d1,d2(12),d3(12,34);
   
    return 0;
}