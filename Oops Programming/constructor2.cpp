#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public :
    emp()//default constructor// non parametrize constructor
    {
      id=1007;
      sal=890;  
    }

    emp(int a,float b=5)//parameterized constructor
    {
       id=a;
       sal=b; 
    }
    void display()
    {
        cout<<"emp info : "<<endl;
        cout<<"emp id : "<<id<<endl;
        cout<<"emp sal : "<<sal<<endl;
    }

};
int main()
{
    emp e1(1001,12000),e2(1002,50000),e3(1003),e4,e6;
    e1.display();
    e1.display();
    e2.display();
    e3.display();

    return 0;
}