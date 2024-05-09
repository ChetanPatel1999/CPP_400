//wap to find greatest number btween three number.
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter three number : ";
   cin>>a>>b>>c;// 12 34 566
   if(a>b)
   {
      if(a>c)
      {
        cout<<"greatest num : "<<a<<endl;
      }
      else
      {
        cout<<"greatest num : "<<c<<endl;
      }
   }
   else
   {
      if(b>c)
      {
        cout<<"greatest num : "<<b<<endl;
      }
      else{
        cout<<"greatest num : "<<c<<endl;
      }
   }
    return 0;
}