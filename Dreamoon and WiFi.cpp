/*
 Time & Date of creation 15:44:50 31/10/2018  
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

    string s1,s2;
    cin>>s1>>s2;

    int p1= count(s1.begin(),s1.end(),'+');
    int n1 =  s1.size()-p1;
    int p2 = count(s2.begin(),s2.end(),'+');
    int xx = count(s2.begin(),s2.end(),'?');
    int n2 = s2.size()-p2-xx;
    // int diff = (p1-p2)+

    cout<<" "<<p1<<" "<<n1<<" "<<p2<<" "<<n2<<" "<<xx<<endl;

    cout<<fixed;
    cout<<setprecision(11);

    if(p1==p2 && n1==n2)
    {
        cout<<1.000000000000<<endl;
    }

    else if( (p2-p1)>0 || (n2-n1)>0)
    {
        cout <<0.000000000000<<endl;
    }

    else
    {
        int pd = p1-p2;
        int nd = n1-n2;

        int mini = min(pd,nd);
        cout<<mini<<endl;;

        double permu  = double(1)/double(pow(2,mini));

        cout<<permu<<endl;
    }

}