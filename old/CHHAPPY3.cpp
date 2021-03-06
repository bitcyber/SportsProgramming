/*
 Time & Date of creation 05:50:37 03/11/2018  
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
        vvi bb(n+1);
        map<int,int> mm;

        for(int i=1;i<=n;i++)
        {
            int tmp;
            cin>>tmp;
            aa[i]=tmp;
            mm[tmp]=1;
            bb[tmp].pb(i);
        }


        // cout<<bb.size()<<endl<<"here we go"<<endl;
        int flag =0;
        for(int i=1;i<=n;i++)
        {
            if(bb[i].size()>1)
            {
                for(int j=0;j<bb[i].size();j++)
                {
                    // cout<<bb[i][j]<<" ";  //index value;
                    if(mm[bb[i][j]]==1)
                        flag++;

                    if(flag==2)
                        break;
                }
            }

            if(flag==2)
                break;
            flag=0;
        }


        if(flag==2)
        {
            cout<<"Truly Happy"<<endl;
        }
        else
        {
            cout<<"Poor Chef"<<endl;
        }
    }
}