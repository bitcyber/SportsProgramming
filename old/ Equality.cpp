#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

int main()
{
    fast;
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> alphmap;
    // int alpha[k];
    char sa=s[0];
    int i=0;
    for(sa=s[i];i<n;)
    {
        alphmap[sa]+=1;
        i++;
        sa=s[i];
    }

// && alphmap.size()>0
int xx=INT_MAX;
for(map<char,int>::iterator it = alphmap.begin(); it != alphmap.end(); ++it)
{
    if(xx>it->second)
        xx=it->second;
}
    // cout<<xx<<endl;

    if(alphmap.size()==k)
    {
        cout<<xx*k<<endl;
    }
    else
        cout<<0<<endl;
    // cout<<xx<<endl;
}