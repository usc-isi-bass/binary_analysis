#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[])
{
 int input;
 int ret,num;
 scanf("%d",&input);

for(;;)
 {
    if(input<10)
   {
    printf("%d\n",input);
break;
   }
   num=input%10;
  input=input/10;
  
  printf("%d",num);

 }

 return 0;
}
