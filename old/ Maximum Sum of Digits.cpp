#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

#define ll long long int




ll sumll(ll p)
{
    ll ss=0;
    while(p>0)
    {
        ss+= p%10;
        p/=10;
    }

    return ss;
}

int main()
{
    ll n;
    cin>>n;
    ll xx = n/2;
    ll x1,x2;

    x1=n;

    ll sum=0;

    while(x1>=10)
    {
        sum= sum*10+9;
        x1/=10;

    }
    // if(n<=10)
    // cout<<n<<endl;
    // else
    if(n>18)
        cout<<sumll(sum)+sumll((n-sum))<<endl;
    else cout<<n<<endl;



}