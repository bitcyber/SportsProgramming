// https://www.codechef.com/COOK97B/problems/MIXGA

#include<bits/stdc++.h>
using namespace std;

int abso(int num)
{
    if(num<=0)
        return -1*num;
    else
        return num;
}

int main()
{
    int ticket;
    int sum=0;
    cin>>ticket;
    while(ticket--)
    {
        int yash, kavya;
        cin>>yash;
        cin>>kavya;
        int bus[yash];
        for(int seat =0;seat<yash;seat++)
        {
            cin>>bus[seat];
            if(seat%2==0)
                bus[seat]= -1*bus[seat];
            sum = bus[seat]+sum;
        }
        // printf("%d",sum);
        if(abso(sum)>=kavya)
            cout<<1<<endl;
        else
            cout<<2<<endl;


        // printf("%d %d ",yash,kavya);
    }
}