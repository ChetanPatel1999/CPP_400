//wap to find greatest number btween three number.
#include<iostream>
using namespace std;
int main()
{
   int a,b,c,ans;
   cout<<"enter three number : ";
   cin>>a>>b>>c;// 12 34 566
   ans=(a>b)?(a>c?a:c):(b>c?b:c);
   cout<<"greatest num : "<<ans;
    return 0;
}