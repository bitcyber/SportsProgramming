/*
 Time & Date of creation 21:09:51 24/02/2019  
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
    int n;
    cin>>n;
    vi arr(n);
    int cp=0,cn=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0)
        cn++;
        if(arr[i]>0)
        cp++;

    }

    int d = ceil(float(n)/2);

    if(cp>=d)
    {
        cout<<1<<endl;
    }
    else if( cn>=d)
    {
        cout<<-1<<endl;
    }
    else
    cout<<0<<endl;

}