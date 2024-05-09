//wap to print revrese number of given number.
#include<iostream>
using namespace std;
int main()
{
   int num,rem,rev=0;
   cout<<"enter a num : ";
   cin>>num;//432
   while(num)//0
   {
    rem=num%10;//4
    rev=rev*10+rem;//234
    num=num/10;//0
   }
   cout<<" revrese num : "<<rev;//234
    return 0;
}