#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define speedup  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int hh,mm,tt,h,d,c,n;

double work1()
{
    return ((h/n)+(h%n)>0?1:0)*c;
}

double work2(double ans1)
{
    int sum = (20-hh)*60 -mm;
    h+=sum*d;
    return ans1*0.8;

}

int main()

{
    cin>>hh>>mm;
    cin>>h>>d>>c>>n;
    cout<<fixed<<setprecision(4);
    if(hh>20)
    {
        double ans;
        ans = ((h/n)+(h%n)>0?1:0)*c*0.8;
        cout<<ans<<endl;
        return 0;
    }

    double ans1 = work1();
    double ans2 = work2(ans1);
    cout<<min(ans1,ans2)<<endl;

}