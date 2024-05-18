#include<iostream>
#include<string>
using namespace std;

int main()
{
   //string cities[]={"indore","ujjain","dewase","ratlam","mhow"};
   string cities[5];
   int i;
   cout<<"enter cities name :"<<endl;
   for(i=0;i<5;i++)
   {
    cin>>cities[i];
   }
   cout<<"cities name are : "<<endl;
   for(i=0;i<5;i++)
   {
    cout<<cities[i]<<endl;
   }  
    return 0;
}