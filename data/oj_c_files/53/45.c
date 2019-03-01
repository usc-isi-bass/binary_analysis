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
{int n,i,j;
 scanf("%d",&n);
 int c[300];
 for(i=0;i<n;i++)
 scanf("%d",&c[i]);
 int m=0;
 for(i=0;i<n;i++)
 {for(j=0;j<=i;j++)
   if(c[j]==c[i])
     break;
  if(j==i)
   {if(m!=0) 
    printf(",%d",c[i]);
    else {printf("%d",c[i]);
          m++;}
   }
 }
}