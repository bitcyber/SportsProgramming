/*
 Time & Date of creation 21:42:15 02/11/2018  
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

int arr1[100010]={0};

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
        map<int,int> mm,mm2;
        // set<pair<int,int> > ss;

        for(int i=1;i<=n;i++)
            {
                cin>>aa[i];
                if(arr1[aa[i]]==0)
                    mm2[aa[i]]=i;
                arr1[aa[i]]-=1;

                if(arr1[aa[i]]==1)
                    mm[aa[i]]=aa[i];

            }

        // for(auto xx:mm)
        //     cout<<xx.fi<< " "<<xx.se<<endl;

        sort(arr1,arr1+n+10);

        int k=0;
        // while(arr1[k]<-1)
        // {
        //     cout<<arr1[k]<<" ";
        //     k++;
        // }
        int flag =0;

        while(arr1[k]<-1)
        {
            // if(mm[xx.fi])
             {
                 for(int j=1;j<=n;j++)
                    // if(mm[aa[j]]>1)
                    if(xx.fi==aa[j])
                    {
                        if(arr1[mm2[xx.fi]]<0 && arr1[j]<0)
                        {
                            flag =1;
                            break;
                        }
                    }

             }
            if(flag || xx.se >= -1)
                break;
        }


        // if(flag)
        // {
        //     cout<<"Truly Happy"<<endl;
        // }
        // else
        //     cout<<"Poor Chef"<<endl;

        memset(arr1,0,sizeof(arr1));


    }

}