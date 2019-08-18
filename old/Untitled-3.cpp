// http://codeforces.com/contest/1025/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    vector<char> vect;
    string a;
    cin>>a;

    int i =0;
    while(a[i]!='\0')
    {
        for (int j=0;j<vect.size();j++)
        {
            if(a[i]==vect[j])
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        vect.push_back(a[i]);
        i++;
    }

    if(vect.size()==1)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}