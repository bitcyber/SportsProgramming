#include<bits/stdc++.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
using namespace std;


int main(int argc, char *argv[],char *envp[])

{
    string s1 = argv[1];
    string s2 = argv[2];
    char **agv;
    int chpid1, chpid2,status,err,fd[2];
    err = pipe(fd);
    if(err==-1)
    {
        cerr<< "opening pipe error\n";
        exit(1);
    }
    chpid1 = fork();
    if(chpid1 == -1)
    {
        cerr<< "error while forking\n";
        exit(1);
    }
    if(chpid1>0)
    {
        //inside parent
        chpid2 = fork();
        if(chpid2 == -1)
        {
            cerr<<"fork2() error\n";
            exit(1);
        }
        waitpid(chpid1,&status,0);
        if(chpid2 == 0)
        {
            //inside child2
            agv = argv +2;
            close(fd[1]);
            dup2(fd[0],fileno(stdin));
            execve(argv[2],agv,envp);
        }
    }
    else
    { //inside child1
        agv = argv +1;
        close(fd[0]);
        dup2(fd[1],fileno(stdout));
        execve(argv[1],agv,envp);
    }




}