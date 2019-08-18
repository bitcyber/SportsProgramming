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
    {   bool tmp[INT_MAX]={false};
        int n,m;
        cin>>n>>m;
        int tmp1,tmp2,tmp3;
        tmp3 =0;
        for(int i=0;i<n;i++)
        {
            cin>>tmp1>>tmp2;

            if(tmp3<tmp2)
                tmp3 = tmp2;
            for(int j=tmp1;j<tmp2;j++)
                tmp[j]= true;
        }

        int arr[m];
        int count =0;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        int j=0;
        for(int i=0;i<m;i++)
        {
            if(arr[i]>=tmp3)
            {
                cout<<-1<<endl;
                continue;
            }
            if(tmp[arr[i]]==true)
            {
                cout<<0<<endl;
                continue;
            }
            else if(tmp[arr[i]]!=true)
            {
                j = arr[i];
                count =0;
                while(tmp[j]!=true)
                {
                    count++;
                    j++;
                }
                cout<<count<<endl;
            }
        }
    }
}