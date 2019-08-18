#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main()
{
    fast;
    int t;
    cin>> t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n==1 || m==1)
        {
            if(n==1 && m==1)
                cout<<"Chefirnemo"<<endl;
            else if(n == 1 && (m-1)%y == 0)
                cout<<"Chefirnemo"<<endl;
            else if(m == 1 && (n-1)%x == 0)
                cout<<"Chefirnemo"<<endl;
            else
                cout<<"Pofik"<<endl;
        }
        else if (((n-1)%x == 0 && (m-1)%y == 0) || ((n-2)%x == 0 && (m-2)%y == 0) )
            cout<<"Chefirnemo"<<endl;
        else
            cout<<"Pofik"<<endl;


    //     int tmp1,tmp2;
    //     tmp1 = (n)%x -1 ;  //(tmp1==0 && tmp2==0) means no addition of sharechat
    //     tmp2 = (m)%y -1 ;  //(tmp1==1 && tmp2==1) means  he can add sharechat
    //     if((tmp1==1 && tmp2==1)||(tmp1==0 && tmp2==0)||(n==1 && m==1)||(n==2 && m==2)||(x==1 && y==1))
    //         {
    //             cout<<"Chefirnemo"<<endl;
    //             continue;
    //         }

    //     else if((x==1 &&tmp2 ==0) || (y==1 && tmp1 ==0))
    //     {
    //             cout<<"Chefirnemo"<<endl;
    //             continue;
    //     }
    //     else
    //         {
    //             cout<<"Pofik"<<endl;
    //         }
    // }
}


//         if( tmp1 ==-1 && tmp2 ==-1)
//         {
//             if(x<=2 && y<=2)
//             {
//                 cout<<"Chefirnemo"<<endl;
//                 continue;
//             }
//             else
//             {
//                 cout<<"Pofik"<<endl;
//                 continue;
//             }
//         }
}