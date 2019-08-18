/*
 Time & Date of creation 21:05:21 03/02/2019  
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
    string ss,tt;
    cin>>ss;
    cin>>tt;
    // cout<<ss.size()<<tt.size();

    if(ss.size()!=tt.size())
    {
        cout<<"No"<<endl;
        return 0;
    }

    int xx =0;
    int yy=0;
    for(int i=0;i<min(sizeof(ss),sizeof(tt));i++)
    {
        if((ss[i]=='a'|| ss[i]=='e'||ss[i]=='i'||ss[i]=='o'||ss[i]=='u'))
        {
            xx = 1;
        }
        else xx=0;

        if((tt[i]=='a'|| tt[i]=='e'||tt[i]=='i'||tt[i]=='o'||tt[i]=='u'))
        {
            yy = 1;
        }
        else yy=0;

        if(xx!=yy)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;


}