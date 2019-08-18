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
typedef unsigned long long int  ull;

bool isitprime(ull x)
{
    if(x==2)
        return true;

    if(x<2 || x%2==0)
        return false;
    for(ull i=3;i*i<=x;i+=2)
        {
            if(x%i==0)
                return false;

        }
    return true;
}


int main()

{
    int t;
    cin>>t;

    while(t--)
    {
        ull a,b;
        cin>>a>>b;
        // bool flag =false;

        // ull diff =((ll)pow(a,2) - (ll)pow(b,2));

        if(a-b==1 && isitprime(a+b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}