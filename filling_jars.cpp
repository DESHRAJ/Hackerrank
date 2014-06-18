#include<iostream>
using namespace std;

int main()
{
	signed long int m,n,i,a,b,k,j,sum=0;
  	cin>>n;
	cin>>m;
	for(i=1;i<=m;i++)
    {
    	cin>>a;
    	cin>>b;
    	cin>>k;
    	if (a<=b&&b<=n)
        	sum+=(b-a+1)*k;
    }
	cout<<sum/n;
    return 0;
}
