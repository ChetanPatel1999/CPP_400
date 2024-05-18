#include<iostream>
using namespace std;
int main()
{
    int a[]={12,34,56,78,90};
    int i;
    cout<<"array elemet are : "<<endl;
    for(i=0;i<5;i++)
    {
     cout<<((a[i]))<<endl;
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
     sum=sum+a[i];
    }
    cout<<endl<<"sum of all element : "<<sum<<endl;
    
    return 0;
}