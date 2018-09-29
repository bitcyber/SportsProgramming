#include<bits/stdc++.h>
using namespace std;

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0; i<n; i++)
#define mp make_pair
#define pb push_back
typedef long long int ll;
#define MAX 100005
// map<int ,int > mp;
// int func(int x)
// {

//     if(x==0)
//     return 0;
//     else if(x==1)
//         return mp[1];
//     else
//         return max(func(x-1),func(x-2)+mp[x]*x);
// }
ll arr[MAX];
ll count1[MAX];

int main()
{
    int n;
    cin>>n;
    int x;

    REP(i,n)
    {
        cin>>x;
        count1[x]++;
    }

    arr[0]=0;
    arr[1]=count1[1];

    for(int i=2;i<MAX;i++)
    {
        arr[i]= max(arr[i-1],arr[i-2]+ i*count1[i]);
    }

    cout<<arr[MAX-1]<<endl;


    // // vector<int> arr(n);
    // int maxi=0;
    // for(int i=0;i<n;i++)
    //     {
    //         int tmp;
    //         cin>>tmp;
    //         // arr[i]=tmp;
    //         maxi= max(tmp,maxi);
    //         mp[tmp]++;
    //     }
    // int res;
    // res=func(maxi);
    // cout<<res<<endl;
}