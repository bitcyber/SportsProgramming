#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std ;

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
    speedup;
    int t;
    cin>>t;
    while(t--)

    {
        int n;
        cin>>n;

        // vector<pair<int,int> > arr;
        int tmp1,tmp2,diff,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>tmp1>>tmp2;
            diff = abs(tmp2 -tmp1);

            if(diff>5)
                count++;
        }

        cout<<count<<endl;


    }
}