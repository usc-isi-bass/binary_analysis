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


int prime(int n)            
{
 int i;
 for (i=2;i<=(int)sqrt(n); i++)
 {   if (n%i==0) 
	   return 0;
 }
 return 1;
}
int main(int argc, char* argv[])
{
 int i,j;
 int n;
 scanf("%d",&n);
 for (i=6;i<=n;i+=2)
    for (j=3;j<i;j++) 
	{
     if (prime(j)&&prime(i-j)) 
	 {
        printf("%d=%d+%d\n",i,j,i-j);
      break;
     }
    }
 return 0;
}