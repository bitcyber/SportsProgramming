#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long

#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb(x) push_back(x)

int main()
{
    fast;
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl<<1<<endl;
    else
    {
        int mid = n/2;
         for(int i = 1; i < mid; i++)
            cout<<i+1<<" ";
        cout<<1<<" ";
        for(int i = mid + 1; i < n; i++)
            cout<<i+1<<" ";
        cout<<mid + 1<<endl;
        cout<<n<<" ";
        for(int  i=0;i<n-1;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
}