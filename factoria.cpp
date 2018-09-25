/************************************
 * This program uses execve system  *
 * call. Execute -                  *
 * $ ./a.out ./factorial 6          *
 * **********************************/

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[], char *envp[]) {
    int chPID, status ;
    char **agv;
       // execve1.c++
    if(argc < 3){
      perror("Less number of arguments\n");
      exit(1);
    }
    agv=argv+1;
    chPID = fork();
    if(chPID == -1) {
      perror("fork() error\n");
      exit(1); 
    } 
    if(chPID > 0) { // Parent
      cout << "Inside Parent\n" ;
      waitpid(chPID, &status, 0) ;
      cout << "child " << chPID << " terminates\n";
    }
    else { // Child
      int err;
      cout << "Inside Child\n" ;
      err = execve(agv[0], agv, envp) ;
//    err = execvp(agv[0], agv) ;
      if(err == -1){
        perror("exec fails\n") ;
        exit(1);
      } 
    }
 
 return 0 ;
}