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
    int t1=0,t2=0,counter=0;
    for(int i=0;i<str.size();i++)
    {
        cc=str[i];
        if(cc=='!')
            {
                t1++;
                t1=t1%n;

            }
        else
        {
            mini=0;
            counter=0;
            for(t2=0;t2<n;t2++)
            {
                // cout<<aa[(t2+(n-t1)%n)%n]<<" "<<(t2+(n-t1)%n)%n<<endl;
                if(aa[(t2+(n-t1)%n)%n]==0)
                    counter=0;
                else
                    {
                        counter++;
                        mini = max(mini, counter);
                        if(counter==k)
                            break;
                    }
            }
            // cout<<endl;
            cout<<mini<<endl;
        }
    }
}

/*

16 100 20
1 1 1 1 0 0 1 1 1 1 0 0 1 1 1 1
?!!?!?!?!?!?!!?!?!?!?!?!?!!???!?!?
4
6
7
8
8
8
8
8
8
8
8
7
5
5
5
4
5

*/