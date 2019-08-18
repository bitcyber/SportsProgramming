#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0)

int main()

{
    speedup;

    int b;
    cin>>b;

    int m;
    cin>>m;

    vector<int> bench;
    int max=0;
    int sum =0;

    for(int i=0;i<b;i++)
    {
        int tmp;
        cin>>tmp;
        sum+= tmp;
        if(max<tmp)
            max=tmp;
        bench.push_back(tmp);
    }
    int tmp1=0;

    int mean = (sum/n);
    tmp1 = mean%n;

    cout<<tmp1+max<<" "<<max+m<<endl;

}