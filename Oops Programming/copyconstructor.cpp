// copy constructor :- using copy constrctor we can assign one object value in another object.
#include<iostream>
using namespace std;
class numbers
{
    int num1,num2;
    public:
    numbers(){}
    numbers(int a,int b)
    {
        num1=a;
        num2=b;
    }
    numbers(numbers &obj)// copy constructor
    {
        cout<<"copy constructor called"<<endl;
        num1=obj.num1+5;
        num2=obj.num2+5;
    }
    void display()
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
};
int main()
{
    numbers n1(12,45),n2(n1),n5;
    numbers n3=n1;
    n5=n1;// default copy constructor is called
    n1.display();
    n2.display();
    n3.display();
    n5.display();
    
    return 0;
}