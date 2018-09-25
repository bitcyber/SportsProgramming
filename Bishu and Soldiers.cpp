
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mset(a,x) memset(a,x,sizeof(a))

#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int binarySearch(int *arr,int low, int high, int key)
{
    if(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key)
        {
            while(arr[mid+1]==key)
                mid = mid+1;
            return mid+1;
        }
        else if(arr[mid]<key)
            return binarySearch(arr,mid+1,high,key);
        else
            return binarySearch(arr,low,mid-1,key);
    }
}

int adduptoi(int *s,int i)
{
    int sum = 0;
    for(int k=0;k<i;k++)
        sum+=s[k];
    return sum;
}

int main()
{   speedup;
    int q,n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n);
    cin>>q;
    while(q--)
    {
        int key;
        cin >>key;

        int i=0;
        if(s[n-1]<key)
            i=n;
        else if(s[0]>key)
            i =0;
        else
        {
            i= binarySearch(s,0,n-1,key);
        }
        cout<<i<<" "<<adduptoi(s,i)<<endl;
    }
}