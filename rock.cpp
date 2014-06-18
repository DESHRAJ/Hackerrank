#include<iostream>
using namespace std;
int main()
    {
        int n,n1,flag=0,i,j,p=0,count=1;
        cin>>n;
        char a[n][100],b[100];
        n1=n;
        for(int i=0;i<n;i++)
            cin>>a[i][100];
        for( i=0;i<n;i++)
        {
            flag=0;
            for( j=1;j<100;j++)
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
            if(flag==1)
            {
               b[p]=count;
               p++;
               count++;

            }
        }
        for(p=0;p<n1;p++)
            cout<<b[p];
    }
