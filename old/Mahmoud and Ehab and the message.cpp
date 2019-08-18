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

    int n,k,m;
    cin>>n>>k>>m;

    string str;
    cin.ignore();
//when ever i will use getline() I will make sure that cin.ignore has been used;
    getline(cin,str);



    vector<int> cost(n);
    cout<<cost[3];
    for(int i=0;i<n;i++)
        cin>>cost[i];

    vector<int> comm[k];

    for(int i=0;i<k;i++)
    {
        int tmp;
        cin>>tmp;
        for(int j=0;j<tmp;j++)
        {
            cin>>comm[i][j];
        }
    }

    cin.ignore();
    string str2;
    getline(cin,str2);


}