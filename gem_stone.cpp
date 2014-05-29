#include<iostream>
using namespace std;
int main()
    {
        int n,n1,flag=0,i,j,p=0,count=1,f1;
        cin>>n;
        char a[n][100],b[100];
        n1=n;
        for(int i=0;i<n;i++)
		       cin>>a[i];
        for(i=0;i<100;i++)
            b[i]=0;
        for( i=0;i<n;i++)
        {
            flag=0;
            for( j=1;j<n;j++)
                {
                    for(int k=0;k<100;k++)
                    {
                        if(a[0][i]==a[j][k])
                        {
                            flag=1;
                            break;
                        }


                    }
                if(flag!=1)
                    break;
                }
                f1=0;
                if(flag==1)
                {
                    for(int l=0;l<100;l++)
                        if(a[0][i]==b[l])
                        {   f1=1;
                            break;
                        }
                   if(f1==0)
                   {
                       b[p]=a[0][i];
                       count++;
                       p++;
                   }
                }

        }
        //for(p=0;p<n1;p++)
            //cout<<b[p];
            cout<<count;
    }
