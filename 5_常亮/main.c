
#include <stdio.h>
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
 
int main()
{
 
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
 
   const int  LENGTH2 = 10;
   const int  WIDTH2  = 5;

   area = LENGTH2 * WIDTH2;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
   return 0;
}

