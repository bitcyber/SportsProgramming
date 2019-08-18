/*
  pipe3.c++ stdin, stdout, dup2() and pipe  
            
*/
#include <iostream>
using namespace std;
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() { // pipe3.c++
      int chpid, fd[2], err, status ;

      err = pipe(fd) ;
      if(err == -1) {
         cerr << "pipe open error\n" ;
         exit(1) ;
      }
      chpid = fork();
      if(chpid == -1){
        cerr << "fork() error\n";
        exit(1);
      }
      if(chpid > 0){ // in parent
        int n;
        close(fd[0]);
        cout << "parent: Enter a +ve integer: ";
        cin >> n;
        cout << "parent: " << n << " is the input\n"; 
       dup2(fileno(stdout), fd[1]+1);
                // copy stdout (1) to fd[1]+1
        close(fileno(stdout)) ; // close stdout
        cout << "Cannot be printed\n";
        dup2(fd[1], fileno(stdout));
        cout << "amit "<<n << "\n";
        waitpid(chpid, &status,0);
      }
      else { // child process
        int m;
        close(fd[1]);
//        dup2(fileno(stdin), fd[1]+1);
        close(fileno(stdin)) ;
        dup2(fd[0], fileno(stdin));
        cin >> m;
        cout << "data " << m << " received in child\n";
      }
    return 0;
}