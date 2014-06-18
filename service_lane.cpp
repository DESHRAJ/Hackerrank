#include<iostream>
using namespace std;

int main()
    {
    long int n,t,i,j,k,t1;
    
    int min=1,q=0;
    cin>>n>>t;
    t1=t;
    int width[n],a[t];
    for(k=0;k<n;k++)
        cin>>width[k];
    cout<<endl;
    while(t--)
        {
        cin>>i>>j;
        cout<<endl;
        min=width[i];
        for(int p=i;p<=j && i<=j;p++)
        {
            if(min>=width[p])
                min=width[p];
            
        }
        a[q]=min;
        q++;
        
        }
    for(q=0;q<t1;q++)
        {
        cout<<a[q];
        }
    
        
}
