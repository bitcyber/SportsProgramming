/*
 Time & Date of creation 20:07:59 06/04/2019  
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

#define ff  first
#define ss  second
#define mp  make_pair
#define pb  push_back
#define N 100001
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    int t;
    cin>>t;
    int count =0;
    while(t--)
    {
        count++;
        int n;
        cin>>n;
        string ss,yy,me ,hola,bhola;
        hola = "S";
        bhola = 'E';
        yy[0] = '\0';
        cin>>ss;
        for(int i=0;i<ss.size();i++)
        {
            // cout<<"ss["<<i<<"]"<<ss[i]<<endl;
            if(ss[i]=='E')
            {
                yy = yy+hola;
            }
            else if(ss[i]=='S')
            {
                yy = yy+bhola;
            }
        }
        cout<<"Case #"<<count<<": "<<yy<<endl;
    }


}