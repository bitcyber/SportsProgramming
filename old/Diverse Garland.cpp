/*
 Time & Date of creation 08:19:11 26/01/2019  
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
    string lamp;
    cin>>lamp;

    // if(n<=3)
    //     {
    //         cout<<0<<endl;
    //         return 0;
    //     }

int count=0;

    for(int i=1;i<n-1;i++)
    {
        if(lamp[i-1]==lamp[i] && lamp[i]==lamp[i+1])
            {
                // cout<<lamp[i]<<endl;
                count+=1;

                if(lamp[i]!='R')
                    lamp[i]='R';
                else if(lamp[i]!='B')
                    lamp[i]='B';
                else if(lamp[i]!='G')
                    lamp[i]='G';
            }
    }


    for(int i=1;i<n-1;i++)
    {
        if(lamp[i]==lamp[i+1])
            {
                // cout<<lamp[i]<<endl;
                count+=1;
                if(lamp[i]!='R'     && lamp[i-1]!='R')
                    lamp[i]='R';
                else if(lamp[i]!='B'&& lamp[i-1]!='B')
                    lamp[i]='B';
                else if(lamp[i]!='G'&& lamp[i-1]!='G')
                    lamp[i]='G';
            }
    }

    if(lamp[0]==lamp[1])
    {
            count+=1;
        if(lamp[0]!='R')
            lamp[0]='R';
        else if(lamp[0]!='B')
            lamp[0]='B';
        else if(lamp[0]!='G')
            lamp[0]='G';
    }
    if(lamp[n-1]==lamp[n-2])
    {
            count+=1;
        if(lamp[n-1]!='R')
            lamp[n-1]='R';
        else if(lamp[n-1]!='B')
            lamp[n-1]='B';
        else if(lamp[n-1]!='G')
            lamp[n-1]='G';
    }
    cout<<count<<endl<<lamp<<endl;



}