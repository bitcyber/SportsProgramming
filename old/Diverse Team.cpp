/*
 Time & Date of creation 14:20:24 27/10/2018  
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
    int k,n;
    cin>>n>>k;
    map<int,int> a;
    for(int i=0,tmp;i<n;i++)
    {
        cin>>tmp;
        a[tmp]=i;
    }

    if(a.size()<k)
        cout<<"NO"<<endl;
    else
        {
            cout<<"YES"<<endl;

            auto itr= a.begin();
            for(int i=0;i<k;i++,++itr)
            {
                cout<<itr->se+1<<" ";
            }
        }
    cout<<endl;


}