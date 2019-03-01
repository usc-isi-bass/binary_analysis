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

int turn(int a);
int main()
{
 int n;
 for(int i=0;i<6;i++)
 {
     scanf("%d",&n);
     if (n<0)
     printf("-%d\n",turn(-n));
     else    
     printf("%d\n",turn(n));
 }
}
int turn(int a)
{
  int i,k,m=0;
  char x[1000];
  for (i = 0;a!=0;i++)    
    {
     x[i] = a%10;
     a=a/10;
    }
   for (k = 0;k<i;k++) 
   m=x[k]+10*m;   
   return (m); 
}