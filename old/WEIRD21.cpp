/*
 Time & Date of creation 21:36:46 27/10/2018  
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

        vi aa;

        for(int i=0,tmp;i<n;i++)
        {
            cin>>tmp;
            aa.pb(tmp);
        }
        sort(aa.begin(),aa.end());

        vii bb;
        int counter=0,tmp=aa[0];

        // bb.pb(mp(aa[0],0));

        for(int i=0;i<n;i++)
        {

            if(tmp==aa[i])
            {
                counter+=1;
                // tmp=aa[i+1];
                // bb.pb(mp(aa[i],counter));
                // counter=0;
                // bb[i].se=counter;
            }
            else
            {
                bb.pb(mp(tmp,counter));
                tmp=aa[i];
                counter=0;
            }


        }
        // int tmp=a[0]
        // bb.pb(mp(tmp,set()))
        // for(int i=0;i<n-1;i++)
        // {
        //     if()
        // }




        vii::iterator itr1=bb.begin(),itr2;
        int ccc=0;

        for(;itr1!=bb.end();++itr1)
        {
            // cout<<"value "<<bb[i].fi<<"  counter: "<<bb[i].se<<endl;

            int a,b;
            a = itr1->fi;
            itr2=next(itr1,1);
            for(;itr2!=bb.end();++itr2)
            {
                b=itr2->fi;
                if(itr1->se>=b && itr2->se>=a)
                    ccc+=2;
            }
        }

        itr1=bb.begin();

        for(;itr1!=bb.end();++itr1)
        {
            if(itr1->se>=itr1->fi)
                ccc+=1;

            // cout<<"value : "<<itr1->fi<<" counter "<<itr1->se<<endl;
        }

        cout<<ccc<<endl;
    }


}