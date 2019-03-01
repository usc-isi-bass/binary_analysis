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

int zhi(int i)
{
    int j,d;
    d=1;
    for(j=1;j<=i/2; j++)  
    {
      if(i%j==0) d=j;
    }
    return (d);
}
int main()
{
    int m,i,j;
    int d=1;
    scanf("%d",&m);
    for(i=3; i<=m/2;i=i+2)  
    {
      j=m-i;
      if (zhi(i) == 1 && zhi(j) == 1) 
	  printf("%d %d\n",i,j);
    }
}
