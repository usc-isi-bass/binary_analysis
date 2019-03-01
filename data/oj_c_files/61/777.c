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
    int n,a,i,j;
    int c[22],b[22];
     c[1]=1;
    c[2]=1;
    for (i=3;i<22;i++)
      c[i]=c[i-1]+c[i-2];
    scanf("%d",&n);
    for (j=0;j<n;j++)
        {
          scanf("%d",&b[j]);
          printf("%d\n",c[b[j]]);
          }
  
}
    
