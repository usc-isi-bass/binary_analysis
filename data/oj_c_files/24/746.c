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

void main()
{
 char a[100][100];
 int b[100],c[100],i,j,max,min;
 i=0;
 while(scanf("%s",&a[i])!=EOF)
  {
   i++;
  }
 for(j=0;j<=i-1;j++)
  {
  b[j]=strlen(a[j]);
  c[j]=b[j];
  }
 max=0;
 min=1000;
 for(j=0;j<=i-1;j++)
  {
  if(c[j]>max)
   max=c[j];
  if(c[j]<min)
   min=c[j];
  }
 for(j=0;j<=i-1;j++)
  if(b[j]==max)
   {
    puts(a[j]);
    printf("\n");
    break;
   }
 for(j=0;j<=i-1;j++)
  if(b[j]==min)
   {
    puts(a[j]);
    break;
   }

}
