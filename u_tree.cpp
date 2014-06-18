#include<iostream>
using namespace std;
int h=1;
void fun1()
{
   h=h*2;
}
void fun2()
    {
    h+=1;
}
int main()
    {
        int t,n,j=0,a[50];
        cin>>t;
    int t1=t;
        while(t--)
        {
            h=1;
            int n;
            cin>>n;
             if(n==0)
                {
                    a[j]=1;
                    j++;
                    //break;
                }
            for(int i=1;i<=n && n!=0;i++)
            {
               
                if(i%2!=0)
                    fun1();
                else
                    fun2();
                if(i==n)
                    {
                    a[j]=h;
                    j++;
                }
            }
        }
        for(j=0;j<t1;j++)
            cout<<a[j]<<endl;
}