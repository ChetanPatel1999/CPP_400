#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,sum;
    cout<<"enter a num :";
    cin>>num;
    a=num/100;
    b=(num%100)/10;
    c=num%10;
    sum=a+b+c;
    cout<<"sum of individual digit of  "<<num<<" = "<<sum<<endl;

    return 0;
}
