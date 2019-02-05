/*
 Time & Date of creation 07:36:07 20/01/2019  
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
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int> foo;
    for(int i=1;i<=n;i++)
    {
        int tmp;
        cin>>tmp
        arr[i-1]=tmp;
        foo[tmp]+=1;
    }

}