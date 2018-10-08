#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define ll long long int
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cou.tie(0);
#define endl "\n"

#define mp make_pair
// #define
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;



int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        ll p1,p2,k;
        cin>>p1>>p2>>k;

        ll tmp = p1+p2;
        ll who = tmp/k;

        if(who%2==0)
        {
            cout<<"CHEF"<<endl;
        }

        else
        {
            cout<<"COOK"<<endl;
        }
    }
}