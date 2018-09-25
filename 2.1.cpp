#include<bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
#define endl "\n"
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"You have entered "<<m << " and "<< n<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    cout<<"Your input matrix is \n"<<endl;
    
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    int chPID[m],status;
    for(int i=0;i<m;i++)
    {
        chPID[i] = fork();
        if(chPID[i]== -1 )
        {
            cout<<"fork() has failed\n";
            exit(1);
        }
        if(chPID[i]>0)  // in parent
        {
            cout<<"Parent "<< i+1<<" has come \n";
            waitpid(chPID[i],&status,0);
            cout<<"Child no "<< i+1<<" has finished it's job\n";
        }
        else
        {
            cout<<"Hey I am child no "<<i+1<<"  and I have sorted the "<<i+1<<" th row\n";
            for(int k=0;k<n;k++)
            {
                for(int l =k+1;l<n;l++)
                {
                    if(arr[i][k]>arr[i][l])
                    {
                        int tmp = arr[i][k];
                        arr[i][k]= arr[i][l];
                        arr[i][l]= tmp;
                    }
                }
            }
        }
    }
    cout<<"Here is the final output\n";
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}