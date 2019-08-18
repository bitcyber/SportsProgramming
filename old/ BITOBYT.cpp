#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

#define mp make_pair
// #define
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll tmp =n-1;
        ll tmp1 = tmp/26;
        ll tmp2 = tmp%26;
        ll t1=2,t2=10,t3=25;
        ll bi=0,ni=0,By=0;

        // cout<<"tmp1 : "<<tmp1<<" tmp2: "<<tmp2<<endl;

        if(tmp1>0)
        {
            ll res = ll(pow(2,tmp1));

            if(tmp2>=t2 && tmp2<=t3)
                By = res;
            else if( tmp2>=t1 && tmp2<t2)
                ni =  res;
            else
                bi = res;
        }
        else
        {
            if(tmp2>=t2 && tmp2<=t3)
                By = 1;
            else if( tmp2>=t1 && tmp2<t2)
                ni = 1;
            else
                bi = 1;
        }


    cout<<bi<<" "<<ni<<" "<<By<<endl;

    }
}