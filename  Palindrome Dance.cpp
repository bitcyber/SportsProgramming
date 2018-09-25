#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int minimum(int a,int b)
{
    if(a<b)
        return 0;
    else if(a>b)
        return 1;
    else
        return -1;
}
// inputCopy
// 5 100 1
// 0 1 2 1 2
// outputCopy
// 101
int main()
{
    fast;
    int n,a,b;
    cin>>n>>a>>b;
    int c[n];
    int tmp[n];
    int xx;
    int min = minimum(a,b);
    for(int i=0;i<n;i++)
        {
            cin>>xx;
            tmp[i]=xx;
            c[i]=xx;
        }
    for(int i=0;i<n/2;i++)
    {
        if((c[i]==2 || c[n-1-i]==2) && n!=1)
        {
            if(c[i]==1||c[i]==0)
                c[n-1-i]=c[i];
            else if(c[n-1-i]==1 || c[n-1-i]==0)
                c[i]=c[n-1-i];
            else
                {
                    c[i]=abs(min);
                    c[n-1-i]=abs(min);
                }
        }
        // else if(c[i]==2 && c[n-])
        else if(c[i]!=c[n-1-i] && n!=1)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    if(n%2==1 && n!=1)
    {
        if(min!= -1 && c[n/2]==2)
            c[n/2]=min;
        if(min== -1 && c[n/2]==2)
        {
            c[n/2] =1;
        }
    }

    if(n==1)
    {
        if((c[0]==2) && min == -1)
            c[0]=1;

        if((c[0]==2) && min != -1)
            c[0]=min;

    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(tmp[i]!=c[i])
        {
            if(c[i]==0)
                sum+=a;
            else
                sum+=b;
        }
    }
    // for(int i=0;i<n;i++)
    //     cout<<c[i]<<" ";
    cout<<sum<<endl;

}