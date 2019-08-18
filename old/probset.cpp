#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back

int main()
{
    speedup;
    int t;
    cin>>t;
    while(t--)
    {   int flag1,flag2;
        int n,m;
        cin>>n;
        cin>>m;
        vector <string> strr;
        string xx;
        for(int i=0;i<=n;i++)
        {
            getline(cin,xx);
            strr.pb(xx);

        }

        string sm1 ;
        sm1='1';
        for(int i=1;i<m;i++)
            sm1=sm1+'1';
        cout<<endl;

        for(int i=1;i<=n;i++)
        {   flag1=0,flag2=0;
            if(strr[i][0]=='c')
            {
                if(strr[i].find(sm1)==string::npos)
                    {
                        cout<<"INVALID"<<endl;
                        break;
                    }
                else
                    {
                        flag1 =1;
                        i++;
                    }
            }
            if(flag1 && strr[i][0]=='w')
            {
                if(strr[i].find(sm1)!=string::npos)
                {
                    cout<<"WEAK"<<endl;
                    break;
                }
                else
                {
                    flag2=1;
                }
            }
            else if(flag1 || flag2)
            {
                cout<<"FINE"<<endl;
                break;
            }
        }


    }

}