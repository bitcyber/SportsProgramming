/*
 Time & Date of creation 21:58:09 09/11/2018  
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
    int n,q,k;
    cin>>n>>q>>k;
    vi aa(n);
    for(int i=0;i<n;i++)
        cin>>aa[i];

    string str;
    cin>>str;

    char cc;
    int mini=0;
    int t1=0,t2=0,t3=0,t4=0,counter=0;
    for(int i=0;i<str.size();i++)
    {
        cc=str[i];
        if(cc=='!')
            t1++;
        else
        {
            t2=0;
            mini=0;
            counter=0;
            while(t2<n)
            {
                // cout<<aa[(t2+(n-t1)%n)%n]<<" ";
                if(aa[(t2+(n-t1)%n)%n]==1)
                {
                    while(aa[(t2+1+(n-t1)%n)%n]==1)
                        {
                            counter++;
                            t2++;
                            if(counter==k)
                                break;
                        }
                }
                if(mini<counter)
                        mini=counter;

                else
                    counter=0;
                t2++;
            }
            cout<<mini<<endl;
        }
    }
}