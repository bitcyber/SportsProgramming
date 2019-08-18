/*
 Time & Date of creation 14:23:48 31/10/2018  
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
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a==1 && b==1)
        {cout<<0<<endl;
        return 0;}


    while(a>0 && b>0)
    {

        
        if(a<b)
        {
            a++;
            b-=2;
        }
        else
        {
            b++;
            a-=2;
        }
        // cout<<"a "<<a<<" b "<<b<<endl;
        count++;
    }
    cout<<count<<endl;

}