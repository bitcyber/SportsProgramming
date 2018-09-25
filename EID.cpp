#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    speedup;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v,v+n);

        int tmp,tmp1;
        int i=0;
        tmp=v[0];
        tmp1 = v[1];
        int diff = abs(v[0]-v[1]);

        for(i =0;i<n-1;i++)
        {
            if(abs(v[i+1]-v[i])<diff)
                diff = abs(v[i+1]-v[i]);
        }
        cout<<diff<<endl;
    }
}