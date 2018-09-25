/*
  procMem1.c++ memory of child process
*/
#include <iostream>
using namespace std;
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main() { // procMem1.c++
   int chPID, n ;

   chPID = fork();
   if(chPID == -1) { // fork fails
     perror("fork() fails\n");
     exit(1);  
   } 
   if(chPID > 0){ // parent
     n=10;
     cout<<"In parent &n:"<<(void *)&n<< ", n: " << n << "\n";
   }
   else {  // child
     n=15;
     cout << "In child  &n:" << (void *)&n << ", n: " << n << "\n";
     n = 20;

          cout << "In child  &n:" << (void *)&n << ", n: " << n << "\n";

   }
   return 0 ;
} 
