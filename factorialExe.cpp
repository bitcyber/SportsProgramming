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
    char **agv = argv+1;
       // execve2.c++
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
      // execve(agv[0], agv, envp) ;
      __asm__ __volatile__(
                   "movq $59, %%rax\n\t"
                   "syscall\n\t"
                   :"=a" (err)
                   :"D" (agv[0]), "S" (agv), "d" (envp)
                           ) ;
      if(err == -1){
        perror("fork() error\n");
        exit(1); 
      }
    }
 
 return 0 ;
}