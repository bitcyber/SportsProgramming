#include <iostream>
using namespace std;

int main()
{
    string t,p;
    cin>>t;
    cin>>p;
    int n=t.length();
    int m=p.length();
    int i,j;
    int prefix[m+1];
    for(i=m+1;i>-1;i--)
    {p[i]=p[i-1];}
    for(i=0,j=1;i<m;i++)
    {
        if(p[i]==p[j])
        {
            prefix[i]=j+1;
            j++;
        }
        else
        {
            prefix[i]=0;
            j=0;
        }
    }
    for(i=0;i<m;i++)
    {cout<<prefix[i];}

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(p[j]!= t[i])
            {   j = prefix[j-1];
            }

        }
        if(j==m-1)
        {cout<<"bingo\n";}
    }
    return 0;
}
