#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;

ll digisum(ll x)
{
    ll tmp = x;
    ll sum = 0;
    while(tmp>0)
    {
        sum+=tmp%10;
        tmp/=10;
    }
    return sum;
}


map<ll,ll> mp;
ll termi;
ll n,d;
bool visited[10010]={false};
int val[100010] = {-1};
ll sz=0;

ll recur(ll x)
    {
        // sz = mp.size();
        cout<<"x : "<<x<<endl;
        // mp[termi]++;
        if(x== termi)
            return 0;
        {
            if(visited[x])
                return val[x];
            else
            {
                visited[x]=true;
                val[x]= min(recur(digisum(x)) , recur(x+d))+1;
                // return 1;
            }
        }
        // val[x]= min(recur(digisum(x)) , recur(x+d))+1;
        return val[x];
    }

int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        ll steps=0;
        // map<ll,ll> mp;
        ll tmp1=n ,tmp2=d;
        if(n==1)
        {
            cout<<1<<" "<<0<<endl;
            continue;
        }
        while(tmp1>10)
        {
            tmp1 = digisum(tmp1);
            steps++;
        }

        ll dsteps=0;

        while(tmp2>10)
        {
            tmp2 = digisum(tmp2);
            dsteps++;
        }

        // for(int i=0;i<10;i++)
        //     val[i]=i;


        if(tmp1 ==9 && tmp2 ==9 )
            termi = 9;
        else if(tmp1 ==9 && tmp2 !=9)
            termi = tmp2;
        else if(tmp1 !=9 && tmp2 == 9)
            termi = tmp1;
        else if(tmp1%3==0 && tmp2%3==0)
            termi = 3;
        else termi =1;


        cout<<"termi : "<<termi<<endl;
        steps+= recur(n);

        cout<<termi<<" "<<steps<<endl;
    }
}