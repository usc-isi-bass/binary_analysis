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
{int n,i,t=0;float s=0;
 int m[300];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {scanf("%d",&m[i]);
   s=s+m[i];}
 float aver;
 aver=s/n;
  int k=0;
 for(i=1;i<n;i++)
  if(fabs(m[k]-aver)<fabs(m[i]-aver))
     k=i;
 for(i=0;i<n;i++)
  if(fabs(m[k]-aver)==fabs(m[i]-aver))
    {if(t)
     printf(",");
     printf("%d",m[i]);
     if(t==0)
      t++;
     }
}