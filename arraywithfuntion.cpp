#include<iostream>
using namespace std;
int maxelement(int arr[],int size)
{
//12,333,56,78,5
 int max=arr[0],i;//333
 for(i=0;i<size;i++)//1
 {
    if(max<arr[i])
    {
        max=arr[i];
    }
 }
  return max;
}
int main()
{
   int a[]={12,333,56,78,5};
   int b[]={23,45,678,90};
    int res=maxelement(a,5);
    cout<<"max = "<<res<<endl;
    res=maxelement(b,4);
    cout<<"max = "<<res<<endl;
    return 0;
}