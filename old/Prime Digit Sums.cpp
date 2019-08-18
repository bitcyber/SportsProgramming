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


bool prime[10010];

void isitprime(ll n)
{
    for (int p=2; p*p<=n; p++)
    {
        memset(prime,true,sizeof(prime));
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}


ll digisum(ll y)
{
    ll sum=0;
    while(y>0)
    {
        sum+= y%10;
        y/=10;
    }
    return sum;
}


bool check(string kk)
{

    bool flag=true;
    for(int j=3;j<=5;j++)
    {
        for(int i =0;i<=kk.size()-j;++i)
        {
            ll tt = stol(kk.substr(i,j));
            ll dsum = digisum(tt);
            flag = prime[dsum];
            if(flag ==false)
                return false;
            // cout<<tt<<" "<<dsum<<" "<<flag<<endl;
        }
        // cout<<endl;

    }
    return true;

}

int main()

{
    ll q;
    cin>>q;

    while(q--)
    {
        bool flag = true;
        string ss;
        cin>>ss;
        // string test = ss.substr(0,2);
        // cout<<test;
        string kk =ss;
        isitprime(1000);

        flag = check(ss);

        if(flag)
        {
            cout<<"yes"<<endl;
        }
    }

}