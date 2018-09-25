/*
  createProc1.c++ creates a child process, prints pid and ppid
*/
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define endl "\n"
int main() { // createProc1.c++
   int chPID, status ;

    cout<<"yes it is from 15th line"<<endl;
   chPID = fork();
   cout<<chPID<<endl;
   if(chPID == -1){
     perror("fork() failed\n");
     exit(1); 
   }
   if(chPID > 0) {  // parent
      // sleep(1);
      cout << "In parent: parent pid = " << getpid() << "\n" <<
             "\tIn parent: child pid = " << chPID << "\n" ;
      waitpid(chPID, &status, 0) ;
      cout << "Child has finished" << endl;
   }
   else {  // child
      sleep(1);
      cout << "In child: child pid = " << getpid() << "\n"
           << "\tIn child: parent pid = " << getppid() << "\n" ;
   }
   return 0 ;
} 
