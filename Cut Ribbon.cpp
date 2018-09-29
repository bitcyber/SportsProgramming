#include<bits/stdc++.h>
using namespace std;
#include<limits.h>

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define MAX 4001

int dp[MAX];

int dpfunc(int n,int a,int b,int c)
{
    if(n==0)
        return 0;
    else if(n<0)
        return INT_MIN;
    else if(dp[n]!=-1)
        return dp[n];
    else return max(1+ dpfunc(n-a,a,b,c),max(1+dpfunc(n-b,a,b,c),1+dpfunc(n-c,a,b,c)));
}

int main()

{
    speedup;
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    for(int i=0;i<MAX;i++)
    {
        dp[i]=-1;
    }

    for(int i=1;i<=n;i++)
    {
        dp[i]=dpfunc(i,a,b,c);
    }

    cout<<dp[n]<<endl;

}