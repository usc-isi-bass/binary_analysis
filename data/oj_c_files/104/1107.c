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

int main()
{
 int x,y,m[11],n[11],i,j,k;
 scanf("%d%d",&x,&y);
 m[0]=x;
 n[0]=y;
 for(i=1;i<11;i++)
  {m[i]=m[i-1]/2;
   n[i]=n[i-1]/2;}
 for(i=0;i<11;i++)
  for(j=0;j<11;j++)
   if(m[i]==n[j]) 
   {printf("%d",n[j]);
    j=11;
    i=11;}
}
