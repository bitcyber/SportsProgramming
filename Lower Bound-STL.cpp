#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
int main()

{
    int t;
    cin>>t;
    int x,y;

    set <int> ss;

    while(t--)

    {

        cin>>y>>x;

        if(y==1)
            ss.insert(x);
        else if(y==2)
            ss.erase(x);
        else if(y==3)
            {
                set<int>::iterator itr = ss.find(x);
                if(itr!=ss.end())
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
    }
}