//printing sum of integers
#include<iostream>
using namespace std;

int main()
{
	
int t,n,i,r,sum1=0;
cout<<"enter integer"<<endl;

cin>>n;
  while(n>0)
    {
         
         r=n%10;
	     sum1=sum1+r;
	     n=n/10;
 }
cout<<sum1;	         
}
