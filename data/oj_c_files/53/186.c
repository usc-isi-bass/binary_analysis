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
{int c[300],n,i,j,k;
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&c[i]);
printf("%d",c[0]);
for(i=1;i<n;i++)
  {k=0;
for(j=0;j<i;j++)
if(c[i]!=c[j]) k++;
if(k==i)
printf(",%d",c[i]);
   }
}

