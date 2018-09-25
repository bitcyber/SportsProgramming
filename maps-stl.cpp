#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int main()
{
    int t;
    cin>>t;
    map<string,int> mm;
    while(t--)
    {
        int t,y;
        string x;
        cin>>t>>x;
        if(t==1)
        {   cin>>y;
            // y+=mm[x];
            mm[x]+=y;
        }
        else if(t==2)
        {
            mm.erase(x);
        }
        else
        {
            cout<<mm[x]<<endl;
        }
    }
}