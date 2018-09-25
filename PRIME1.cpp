#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long int ll;
typedef unsigned long long  ull;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >>t;
    ll m,n;
    cin>>m>>n;
    if(m>n) return 0;
    int flag=1;
    ll i ,j;
    while(t--)
    {

        if(m%2==0)
        {
            for ( i=m;i<=n;)
            {

                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                        {
                            flag =0;
                            break;
                        }
                }
                if(flag)
                    cout<<i<<endl;
                flag =1;
                i++;

            }
        }

        else
        {
            for ( i=m;i<=n;)
            {

                for(j=2;j<=i/2;)
                {
                    if(i%j==0)
                        {
                            flag =0;
                            break;
                        }
                    j+=2;
                }
                if(flag)
                    cout<<i<<endl;
                flag =1;
                i+=2;

            }

        }
    }

}