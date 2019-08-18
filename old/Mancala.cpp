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

// ll sumover(vector<ll> &b)
// {

//     for(int i=0;i<n;i++)


// }
vector<ll> a;
int n =14;

int main()
{
    // ll esum=0,osum=0,no_of_even=0,no_of_odd=0;

    for(int i=0;i<n;++i)
        {
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }

    vector<ll> b(a.begin(),a.end());
    ll res = 0;

    for(int j=0;j<n;++j)
    {
        ll x = b[j];
        b[j]=0;
        // desum -=x;
        for(ll i=0;i<n;i++)
            b[i]+=x/14;

        ll tmp = x%14;

        ll k = j+1;
        while(tmp--)
        {
            if(k==14)
                k=0;
            b[k++]++;
        }

        ll score =0;

        for( int i=0;i<14;++i)
        {
            if(b[i]&1)
                continue;
            score+=b[i];
        }
        res = max(res,score);
        // if(b[j])
    }

cout<<res<<endl;

    // for(int i=0;i<n;i++)
    // {

    //     ll b = a(a.begin(),a.end());
    //     ll desum = esum;
    //     ll dosum = osum;
    // // cout<<a[i]<<endl;
    //     ll x = a[i]
    //     ll tmp1=0,tmp2=0;
    //     tmp1 = x/14;
    //     tmp2 = x%14;

    //     if(tmp1%2==0 && tmp1>0)
    //     {
    //         desum += tmp1*no_of_even;
    //     }
    //     if(tmp1%2==1 && tmp1>0)
    //     {
    //         dosum += tmp1 * no_of_odd;
    //     }

    //     for(int j=0;j<tmp2;j++)
    //     {
    //         if(a[(j+i+1)/14]%2==0)
    //         {
    //             desum +=1;
    //         }
    //         else
    //         {
    //             dosum +=1;
    //         }
    //     }



    // }
}