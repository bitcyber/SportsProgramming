/*
 Time & Date of creation 08:13:22 20/01/2019  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    int n,m;
    cin>>n>>m;

    vi arr;
    map<int,int> mymap;

    for(int i=0;i<m;i++)
    {
        int tmp;
        cin>>tmp;
        arr.pb(tmp);
        mymap[tmp]+=1;
    }

    set<int> myset,yset;
    vi foo;

    for(int i=0;i<m;i++)
    {
        if(myset.find(arr[i]) != myset.end())
            {
                myset.insert(arr[i]);
                mymap(arr[i])-=1;
            }
        else
        {

        }
        if(myset.size()==n)
            {
                // foo.push_back(i);
                cout<<1;
                myset.clear();
            }
        else
        {
             cout<<0;
        }
    }
    cout<<endl;

}