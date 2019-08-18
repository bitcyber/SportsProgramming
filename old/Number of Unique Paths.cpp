/*
 Time & Date of creation 19:11:23 04/02/2019  
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
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr[m][n];
        arr[0][0]=0;

        for(int i=0;i<n;i++)
        {
            arr[0][i]=1;
        }
        for(int i=0;i<m;i++)
        {
            arr[i][0]=1;
        }

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                arr[i][j]= arr[i-1][j] + arr[i][j-1];
            }
        }
        cout<<arr[m-1][n-1]<<endl;
    }

}