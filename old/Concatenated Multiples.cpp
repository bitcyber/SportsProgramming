#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long int ll;
typedef unsigned long long  ull;

ll concate(ll a ,ll b)
{
    // string str1,str2,result;
    // str1= to_string(a);
    // str2 = to_string(b);
    // result = str1+str2;
    // return stoll(result);

    ll times = 1;
    while(times<=b)
        times*=10;
    return a*times +b;

    // return a* pow(10,ceil(log10(b))) +b;
}

int main()
{
    int n;
    ll k;
    cin>>n>>k;
    ll a[n];
    int count =0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i =0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            if(j!=i)
            {
                ll l1 = concate(a[i],a[j]);
                ll l2 = concate(a[j],a[i]);
                if(l1%k==0)
                    count++;
                if(l2%k==0)
                    count++;
            }
        }
    }
    cout<<count<<endl;

}