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
    int n;
    cin>>n;
    int ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    bool f1=0,f2=0,f3=0,f4=0;

    if((ax-bx) <0 && (ax-cx<0))
        {
            f1 = true;
            // cout<<f1<<endl;
        }
    else if((ax-bx) >0 && (ax-cx)>0)
    {
        f1=true ;
        // cout<<f1<<endl;
    }

    if(((ay-by)<0 && (ay-cy)<0))
        {
            f2 = true;
            // cout<<f2<<endl;
        }
    else if( (ay-by)>0 && (ay-cy)>0)
    {
            f2 = true;
            // cout<<f2<<endl;
    }


    if(ax-cx==0|| ay-cy==0||(ay-ax)==(cy-cx))
        {
            cout<<"NO"<<endl;
            return 0;
        }

    if(f1 && f2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }



}