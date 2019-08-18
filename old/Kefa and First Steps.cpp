//http://codeforces.com/problemset/problem/580/A
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()

{
    int n,count1(1),count2(1);
    cin>>n;
    // cout<<count1<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if(arr[i]>=arr[i-1])
                {
                    count1++;
                    count2 = max(count2,count1);
                }
                else
                {
                    count1 =1;
                }
            }
        }
        cout<<count2<<endl;
}