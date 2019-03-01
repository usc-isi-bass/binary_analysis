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

int ji,m;
void fang(int a,int b)
{
     int i;
     if(b==1) ji++;
     else
     {
       for(i=m;i<=(a/b);i++)
       {
           m=i;
           fang(a-i,b-1);
       }
     }
}

main()
{
      int k,n,p,q;
      scanf("%d",&n);
      for(k=1;k<=n;k++)
      {
          scanf("%d %d",&p,&q);
          ji=0;
          m=0;
          fang(p,q);
          printf("%d\n",ji);
      }
}