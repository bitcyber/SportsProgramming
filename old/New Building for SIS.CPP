#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()

{
    ll n,h,a,b;
    int k;
    ll ta,tb,fa,fb;
    cin>>n>>h>>a>>b>>k;

    while (k--)
    {
        int sum1=0;
        int sum2=0;
        cin>>ta>>fa>>tb>>fb;
        sum1= abs(tb-ta);
        ll tmp;

        if(!sum1)
            {
                cout<<abs(fa-fb)<<endl;
                continue;
            }

        if(abs(fa-a)<abs(fa-b))
        {
            sum2 = abs(fa-a) + abs(fb-a);
        }
        else
        {
            sum2 = abs(fa-b) + abs(fb-b);
        }
        cout<<(sum1+sum2)<<endl;
    }
}