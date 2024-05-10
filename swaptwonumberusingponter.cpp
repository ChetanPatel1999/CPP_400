#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
 int num1,num2;
 cout<<"enter two value : ";
 cin>>num1>>num2;
 cout<<"before swapping values : "<<endl;
 cout<<"num1 = "<<num1<<endl;
 cout<<"num2 = "<<num2<<endl;
 swap(&num1,&num2);// call by referrence
 cout<<"after swapping values : "<<endl;
 cout<<"num1 = "<<num1<<endl;
 cout<<"num2 = "<<num2<<endl;
    return 0;
}