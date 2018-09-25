#include<bits/stdc++.h>

using namespace std;

int facto(int x)
{
    int y=1;
    for(int i=1;i<=x;i++)
        y*=i;
    return y;

}

int main()

{
    // int x=9;
    char buffc[100] ={0};
    close(fd[1]);
    read(fd[0],buffc,100);

    // cin>>x;
    int x= atoi(buffc)
    int res = facto(x);
    cout<<res<<endl;

    close(fd[0]);

}