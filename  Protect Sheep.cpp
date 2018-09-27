#include<bits/stdc++.h>
using namespace std;

#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()

{
int r,c;
cin>>r>>c;
char farm[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>farm[i][j];
        if(farm[i][j]=='.')
            farm[i][j]='D';
    }
}

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(farm[i][j]=='W')
        {
            if(farm[i][j-1]=='S' || farm[i][j+1]=='S'||farm[i-1][j]=='S'||farm[i+1][j]=='S')
            {
                cout<<"No"<<endl;
                exit(0);
            }
        }
    }
}

cout<<"Yes"<<endl;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<farm[i][j];
    }
    cout<<endl;
}
}