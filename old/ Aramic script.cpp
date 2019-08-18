#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

#define mp make_pair
#define pb push_back
// #define
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;


string getcharac(string ss)
{
    // map[char
    string kk="";
    char xx=ss[0];
    kk+=xx;

    for(int i=1;i<ss.size();i++)
    {
        xx= ss[i];

        if(xx!=ss[i-1])
            kk+=xx;
    }

    return kk;



}

int main()
{
    int n;
    cin>>n;
    vector<string> s ;

    for(int i=0;i<n;i++)
    {
        string kk;
        cin>>kk;
        sort(kk.begin(),kk.end());
        s.pb(kk);
    }

    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        // cout<<s[i];
        string kl;

        kl =getcharac(s[i]);
        mp[kl]+=1;
    }

    cout<<mp.size()<<endl;

}