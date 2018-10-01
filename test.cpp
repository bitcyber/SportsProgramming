        #include<bits/stdc++.h>
        using namespace std;
        vector<int>adj[2001];
        int level[2001];
        int main()
        {
            int i,j,n,k,l,a,mx=0;
            cin>>n;
            vector<int>v;
            for(i=1;i<=n;i++)
            {
                cin>>a;
                if(a==-1)
                {
                    v.push_back(i);
                }
                else
                {
                    adj[a].push_back(i);
                }
            }
            for(k=0;k<v.size();k++)
            {
                int cnt=0,top2;
                int top=v[k];
                queue<int>q;
                q.push(top);
                if(adj[top].size()==0)
                    continue;
                while(!q.empty())
                {
                    top=q.front();
                    for(i=0;i<adj[top].size();i++)
                    {
                        top2=adj[top][i];
                        level[top2]=level[top]+1;
                        q.push(top2);
                        //cout<<"TOp 2 = "<<top2<<endl;
                    }
                    q.pop();
                }
                if(mx<=level[top2])
                    mx=level[top2];
            }
                cout<<mx+1<<endl;
        }