#include<bits/stdc++.h>
using namespace std;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define pf  push_front
#define in  insert

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<ll, bool> plb;
typedef priority_queue<ll> pqll;

#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// vector<pair<int,int> > diff;
int main()

{
    fast_io;
    // cout<<"yes"<<endl;

    int n,k1,k2;
    // cin.ignore();
    cin>>n>>k1>>k2;
    // cout<<"yes"<<endl;

    ll a[n];
    ll b[n];
    pqll pq;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i =0;i<n;i++)
        cin>>b[i];
    // cin.ignore();
    // cout<<"yes"<<endl;


    for(int i=0;i<n;i++)
        pq.push(abs(a[i]-b[i]));

        k1+=k2;
        while(k1>0)
        {
            ll k = pq.top();
            k--;
            k1--;
            pq.pop();
            pq.push(abs(k));
        }
        ll ans =0;
        while(!pq.empty())
        {
            ans+= (pq.top()*pq.top());
            pq.pop();
        }
        cout<<ans<<endl;


//     // cin.ignore();
//     // cout<<"yes"<<endl;
//     sort(diff.begin(),diff.end());

//     auto itr = diff.begin();
//     int avg=0;
//     // for(auto itr = diff.rbegin();itr!=diff.rend();++itr)
//     // cout<<"yes"<<endl;
//     while(k1>0 || k2>0)
//         {// {    cout<<"yes"<<endl;
//         if(prev(itr,1)==diff.begin())
//             // itr= diff.rbegin();
//         avg = (a[itr->second] + b[itr->second])/2;
// // cout<<"yes"<<endl;
//         while(itr->first != prev(itr,1)->first)
//         {
//             // cout<<"No ";
//             if(a[itr->second]!=avg && k1>0)
//             {if(a[itr->second]<avg )
//             {
//                 a[itr->second]+=1;
//                 k1--;
//             }
//             else if(a[itr->second]>avg)
//             {
//                 a[itr->second]-=1;
//                 k1--;
//             }}
//             // else
//             if(b[itr->second]!=avg&&k2>0)
//             {if(b[itr->second]<avg )
//             {
//                 b[itr->second]+=1;
//                 k2--;
//             }
//              else if(b[itr->second]>avg)
//             {
//                 b[itr->second]-=1;
//                 k2--;
//             }}
//             itr->first--;

//             // cout<<"itr->first :"<<itr->first <<"  next(itr->first): "<<itr->second<<endl;
//             // cout<<"a"
//         }
//         ++itr;
//     }
//     // cout<<"yes"<<endl;
//     int sum=0;
//     for(int i=0;i<n;i++)
//         {
//             // cin>>tmp;
//             // b.push_back(tmp);
//             cout<<a[i]<<" " <<b[i]<<endl;
//             sum+= int(pow(abs(a[i] - b[i]),2));
//             // diff.push_back(make_pair(tmp,i));
//         }
//     // cout<<"yes"<<endl;
//     cout<<sum<<endl;

    // cout<<"yes"<<endl;



// int i=0;
//     while(k1>0 || k2>0)
//     {
//         if(i==n)
//             i=0;
//         int avg = (a[i]+b[i])/2;
//         i++;
//         if(a[i]<avg && k1>0)
//         {
//             a[i]+=1;
//             k1--;
//         }
//         else if( a[i]>avg && k1>0)
//         {
//             a[i]-=1;
//             k1--;
//         }

//         if(b[i]<avg && k2>0)
//         {
//             b[i]+=1;
//             k2--;
//         }
//         else if( b[i]>avg && k2>0)
//         {
//             b[i]-=1;
//             k2--;
//         }

//     }





    // cout<<a[1];



}