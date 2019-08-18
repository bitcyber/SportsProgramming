#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
// https://www.spoj.com/problems/PALIN/
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isitpalin(string s)
{
    if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin()))
        return 1;
    else return 0;
    }

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string k;
        cin>>k;
        bool x =0;
        int tmp=stoi(k);
        string tmps;
        while(x!=1)
        {
            tmp++;
            tmps = to_string(tmp);
            x = isitpalin(tmps);
        }

    }
}