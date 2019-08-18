/*
 Time & Date of creation 20:07:12 22/01/2019  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
#include<string>
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
    int flag =1;
    int count =0;
    string xx;
    xx=ss;

    while(flag)
    {
    int i;
        for(i=0;i<=xx.size();i++)
        {

        if(xx[i]=='\0')
            {
                flag = 0;
                break;
            }

          if(xx[i]==xx[i+1])
          {
              count++;
              break;
          }
      }

        if(i!=xx.size()-1)
            xx.erase(i,2);

    }

    if(count%2!=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}