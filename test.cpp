#include<bits/stdc++.h>
#include<limits.h>
using namespace std ;
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)

// #define max INT_MAX


int main()
{
    speedup;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int tmp1,tmp2,tmp3;
        tmp3 =0;
        vector<bool> check(INT_MAX,false);

        vector<pair<int ,int> > arr;
        for(int i=0;i<n;i++)
        {
            cin>>tmp1>>tmp2;

            if(tmp3<tmp2)
                tmp3 = tmp2;

            for(int j=tmp1;j<tmp2;j++)
                check[j]=true;
            // arr.push_back(make_pair(tmp1,tmp2));
        }

        // vector<bool> check(tmp3,false);
        // cout<<check[3]<<endl;
        // vector<pair<int,int> >::iterator itr= arr.begin();

        // for(itr=arr.begin();itr!=arr.end();++itr)
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=arr[i].first;j<arr[i].second;j++)
        //         check[j]=true;
        // }

        // for(int i=0;i<tmp3;)

        vector<int> mr;
        int count=0;
        int tmp;

        for(int i=0;i<m;i++)
            {
                    cin>>tmp;
                    mr.push_back(tmp);
            }

        int j = 0;

        for(int i=0;i<m;i++)
        {
            if(mr[i]>=tmp3)
            {
                cout<<-1<<endl;
                continue;
            }
            if(check[mr[i]]==true)
            {
                cout<<0<<endl;
                continue;
            }

            else
            {
                j = mr[i];
                count =0;
                while(check[j]!=true)
                {
                    count++;
                    j++;
                }
                cout<<count<<endl;
            }
        }
    }
}