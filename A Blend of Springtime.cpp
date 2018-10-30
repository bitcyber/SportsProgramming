/*
 Time & Date of creation 16:11:31 29/10/2018  
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

    string ss;
    cin>>ss;

    if(ss.find("BAC")!=string::npos ||ss.find("CAB")!=string::npos||ss.find("ABC")!=string::npos||ss.find("CBA")!=string::npos||ss.find("ACB")!=string::npos||ss.find("BCA")!=string::npos)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}