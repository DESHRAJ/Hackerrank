#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,i,j,p=0,temp;
    cin>>t;
    long int aa[(1000*t)+t];
    while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>b;
        if(a>b)
        {
        	temp=a;
        	a=b;
        	b=temp;
        }
        for(i=n-1,j=0;i>=0;i--,j++)
            {
            	if(a==b)
            	{
            		aa[p]=(n-1)*a;
            		p++;
            		break;
            	}
                aa[p]=a*i+b*j;
                p++;

            }
        aa[p]=0;
        p++;

    }
    for(i=0;i<p;i++)
        {
            if(aa[i]==0)
                cout<<endl;
            else
                cout<<aa[i]<<" ";
        }

}
