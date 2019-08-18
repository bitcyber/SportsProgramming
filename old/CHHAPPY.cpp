/*
 Time & Date of creation 19:32:23 02/11/2018  
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
        int n;
        cin>>n;
        vi aa(n+1);
        map<int ,int> mm;
        priority_queue<pair<int,int> > q;
        for(int i=1;i<=n;i++)
            {
                int tmp;
                cin>>tmp;
                q.push(mp(tmp,i));

                mm[tmp]=1;
            }
        int flag =0;

        for(int i=1;i<n;i++)
        {
            pair<int,int> a,b;
            a= q.top();
            q.pop();
            b = q.top();
            if(a.fi==b.fi)
            {
                if(mm[a.se]==1 && mm[b.se]==1)
                    {
                        flag=1;
                        break;
                    }
            }
        }

        if(flag)
        {
            cout<<"Truly Happy"<<endl;
        }
        else
            cout<<"Poor Chef"<<endl;

    }

}