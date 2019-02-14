/*
 Time & Date of creation 21:11:17 11/02/2019  
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

    vector<string> arr;

    for(int i=0;i<n;i++)
    {
        string bb;
        cin>>bb;

        arr.pb(bb);
    }

    int count =0;
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(arr[i-1][j-1]=='X' &&arr[i-1][j+1]=='X'&&arr[i+1][j-1]=='X'&&arr[i+1][j+1]=='X'&&arr[i][j]=='X')
                // if(arr[i][j]=='X')
                    count++;
        }
    }
    cout<<count<<endl;

}