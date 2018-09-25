// https://www.codechef.com/AUG18B/problems/SHKNUM


#include<bits/stdc++.h>
using namespace std;
int count2sq(long long x)
{
    long long p=1;
    int count=-1;
    while(p<=x)
    {
        p*=2;
        count++;
    }

    return count;
}
long long findsq(int t)
{
    long long xx=1;
    while(t--)
    {
        xx*=2;
    }
    return xx;

}
int main()
{
    int t;
    cin>>t;
    long long int  n;

    while(t--)
    {
        cin >>n;


        int x0 = count2sq(n);

        // long long bb = findsq(x0);
        int steps =0;
        long long cc = n-findsq(x0);

        if (cc ==0)
        {
            steps +=1;
            printf("%d\n",steps);
            continue;

        }
        int x1 = count2sq(cc);
        long long dd = cc- findsq(x1);
        long long dd1 = findsq(x1+1)-cc;

        if(dd==0)
        {
            steps = 0;
            printf("%d\n",steps);
            continue;

        }

        if(dd>=dd1)
        {
            printf("%lld\n",dd);
            continue;

        }
        else
        {
            printf("%lld\n",dd1);
            continue;

        }
        // printf("%d %d,%lld,%lld\n",x0,x1,cc,dd);
    }
}