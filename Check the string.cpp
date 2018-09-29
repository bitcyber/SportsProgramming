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
    string ss;
    getline(cin,ss);
    // cin.ignore();
    // cout<<ss<<endl;
    string xx;
    xx = ss;
    sort(xx.begin(),xx.end());
    // cout<<ss<<" "<<xx<<endl;
    int count_a=0,count_b=0,count_c=0;
    count_a = count(xx.begin(),xx.end(),'a');
    count_b = count(xx.begin(),xx.end(),'b');
    count_c = count(xx.begin(),xx.end(),'c');
    (ss==xx&&(count_c ==count_a || count_c == count_b) && count_a>=1 && count_b>=1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
