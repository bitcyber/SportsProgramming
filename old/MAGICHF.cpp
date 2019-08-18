#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,s;
        cin>>n>>x>>s;
        // cout<<n<<x<<s<<endl;
        vector<pair<int,int> > swapped;
        int tmp1,tmp2;
        for(int i=0;i<s;i++)
        {
            cin>>tmp1>>tmp2;
            swapped.push_back(make_pair(tmp1,tmp2));
        }
        // vector<int,int>::iterator it=swapped.begin();
        tmp1 = x;
        for(int i=0;i<s;i++)
        {
            // cout<<endl<<swapped[i].first<<" " << swapped[i].second <<endl;
            if((tmp1==swapped[i].first || tmp1 == swapped[i].second)&& swapped[i].first!=swapped[i].second )
                {if(tmp1==swapped[i].first)
                    {tmp1 = swapped[i].second;}
                else
                    {tmp1 = swapped[i].first;}}
        }
        cout<<tmp1<<endl;
        // for(;it!=swapped.end();++it)
        // {
        //     cout<<it->first<<endl;
        // }
    }
}
