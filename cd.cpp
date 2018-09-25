/*
 * changeDir.c++ changes the current working directory 
 *               by calling chdir()
 *               $ ./a.out <path>
 */
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char *av[]){
    char *cwdP;  // changeDir.c++

    if(ac < 2){
      cout << "No path specified\n";
      exit(1);
    }
    cwdP=get_current_dir_name();
    cout << cwdP << endl;
    chdir(av[1]);
    cwdP=get_current_dir_name();  
    cout << cwdP << endl;
    
    free(cwdP);  
    return 0;
}
