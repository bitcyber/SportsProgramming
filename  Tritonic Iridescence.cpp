#include<bits/stdc++.h>
using namespace std;

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)


int main()

{
    speedup;
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    bool tmp1=true,tmp2=true,tmp3=false;
    int count1=0,count2=0;

    for(int i=1;i<n;i++)
    {
        if(ss[i]==ss[i-1] && ss[i]!='?')
            {
                cout<<"No"<<endl;
                return 0;
                break;
            }
    }

    for(int i=0;i<n;++i)
    {
            if(ss[i]=='?')
            {
                if(i==0 || i==n-1)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                    exit(0);
                }

                if(ss[i+1]=='?')
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
                if(ss[i-1]==ss[i+1])
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }

    }

    cout<<"No"<<endl;
    // cout<<ss<<endl;
}