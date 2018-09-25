//binary search

#include<bits/stdc++.h>
using namespace std;


int rbs(int arr[],int key,int l,int r)
{

    if(r>=l)
    {
        int mid = l + (r-l)/2;

        if(arr[mid] ==key)
            return mid;
        if(arr[mid]>key)
            return bs(arr,key,l,mid-1);
        else
            return bs(arr,key,mid+1,r);
    }

    return -1;
}

int ibs(int arr[],int key,int l,int r)
{
    while(l<=r)
    {
        int mid = l+(r-l)/2;

        if(arr[mid]==key)
            return mid;

        if(arr[mid]<key)
            l = mid+1;

        if(arr[mid]>key)
            r = mid -1;
    }

    return -1;
}
