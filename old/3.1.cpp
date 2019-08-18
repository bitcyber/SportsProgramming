#include<bits/stdc++.h>
#include<string>
#include <stdlib.h>
#include <stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include <sys/types.h>


using namespace std;

int main(int argc, char *argv[],char *envp[])
{

    int n = atoi(argv[1]);
    // cout<<"The value of n is "<<n<<endl<<"The process id of he process "<<getpid()<<endl;
    if(n==0)
        exit(1);
    else
    {
        int chPID,status;
        chPID = fork();

        if(chPID==-1)
        {
            cout<<"error while calling fork()\n";
            exit(1);
        }

        else if(chPID>0)//parent
        {
            // cout<<"Parent is running\n";
            cout<<"ProcID: "<<getpid()<<" n:"<<n<<endl;

            waitpid(chPID,&status,0);
            // cout<<"child has finished it work\n";
        }
        else
        {
            int err;
            sprintf(argv[1],"%d",n-1);
            err = execve(argv[0],argv,envp);
            // cout<<"ProcID: "<<getppid()<<" n:"<<n-1;
        }
    }

}