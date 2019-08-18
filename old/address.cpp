#include <iostream>
using namespace std;

int a, b =10;
int main() { // memoryRegions1.c++
   int (* manPtr)() = main ;
   char *ro = (char *)"IIIT Kalyani", *p, c;
   static char s=10;
   p = new char;

//    p = new char;
   cout <<"main() starts: " <<(void *)manPtr << "\n";
   cout <<"Read-only data: " <<(void *)ro << "\n";
   cout <<"Init global data: " <<(void *)&b << "\n";
   cout <<"Uninit global data: " <<(void *)&a << "\n";
   cout <<"Dynamic data: " <<(void *)p << "\n";
   cout <<"Local data: " <<(void *)&c << "\n";
   cout <<"Local static data: " <<(void *)&s << "\n";
   return 0 ;
}