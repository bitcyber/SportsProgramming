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



ll n,d,t;
ll fcount;
ll tcount ;
ll sn ;


ll digisum(ll x)
{
    ll tmp = x;
    ll sum = 0;
    while(tmp>0)
    {
        sum+=tmp%10;
        tmp/=10;

    }
    tcount+=1;
    ll ss =sum;
    if(sum>=10)
        ss=digisum(sum);
    return ss;
}



void func()
{
    for(int j=1;j<=10;j++)
    {
        t = n+d *j;
        // cout<<"t "<<t<<"  sn "<<sn<<endl;
        if(t>=10)
        {
            t = digisum(t);
            fcount += tcount;
            tcount =0;
        }
        if(sn<t)
        {
            sn=t;
            fcount +=j;
        }
    }
    cout<<sn<<" "<<fcount<<endl;
    tcount=0;
    fcount=0;
}

int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        // cout<<digisum(99999)<<" "<<tcount<<endl;
        func();


        // ll steps =1;
        // ll a = n+d

        // if(n==1)
        //     {
        //         cout<<1<<" "<<0<<endl;

        //     }

        // while(digisum(a)>digisum(n))
        // {
        //     n =a;
        //     a+=d;
        //     steps++;
        //     cout<<"digisum("<<a<<") : "<<digisum(a)<<endl;
        //     if(digisum(a)==10)
        //         {steps++;
        //             break;}
        // }
        // ll x;
        // x = digisum(a);
        // if(x==10)
        //     x=1;
        // cout<<x<<" "<<++steps<<endl;;


        // ll steps = 1;
        // ll ndigi =n;
        // ll ddigi =d;
        // while(ndigi>9)
        // {
        //     ndigi= digisum(ndigi);
        //     steps+=1;
        //     // cout<<ndigi<<" "<<ddigi<<endl;
        // }
        // while(ddigi>9)
        //     ddigi = digisum(ddigi);
        // // cout<<ndigi<<" "<<ddigi<<endl;

        // // ll pp=0;
        // steps+= recur(ndigi,ddigi);
        // cout<<1<<" "<<steps<<endl;

    }

    //     if(n==1)
    //     {
    //         cout<<1 <<" "<<0<<endl;
    //         cin.ignore();
    //         continue;
    //     }
    //     ll steps =0;

    //     ll value = digisum(n);
    //     while(value>18)
    //     {
    //         value = digisum(value);
    //         steps++;
    //     }

    //     ll m = value;
    //     ll ddsum= digisum(d);
    //     map<ll,ll> mp;
    //     ll sz=-1;


    // if(n != value)
    //     steps++;

    // // int flag =false;
    //     while(1)
    //     {

    //         sz= mp.size();
    //         mp[value]=steps;
    //         if(sz==mp.size())
    //             break;

    //         // cout<<"value : "<<value<<"    steps : " <<steps<<endl;
    //         steps++;
    //         // value = digisum(value)+ddsum;
    //         value = digisum(digisum(value)+digisum(ddsum));

    //         // cout<<value<<endl;
    //         // if(value+ddsum==10)
    //         //     flag=true;
    //         if(value == m )
    //             break;
    //     }

    //     ll p,q;
    //     p=mp.begin()->first;
    //     q = mp.begin()->second;
    //     // if(flag)
    //         q++;
    //     cout<<p<<" "<<q<<endl;
    // }
}