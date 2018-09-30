#include<bits/stdc++.h>
#include<limits.h>
using namespace std ;
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long int
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)

int main()

{
    speedup;
    int n,k1,k2;
    cin>>n>>k1>>k2;

    vector<int> arr_a;
    vector<int> arr_b;

    int tmp;

    vector<pair<int,int> > diff;

    for(int i=0;i<n;i++)
        {

            cin>>tmp;
            arr_a.push_back(tmp);
        }
    for(int i=0;i<n;i++)
        {
            cin>>tmp;
            arr_b.push_back(tmp);
            tmp = abs(arr_a[i] - arr_b[i]);
            diff.push_back(make_pair(tmp,i));

        }

    sort(diff.begin(),diff.end());

    for(auto itr = diff.rbegin();itr!=diff.rend();++itr)
    {
        // cout<<itr->first<<" "<<itr->second<<endl;
        if(k1>0)
        {
                
        }
    }



    // cout<<arr_a[1];



}