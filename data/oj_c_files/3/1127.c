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
   int n,k,i,j,a[1000],l=0;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]+a[j]==k){l=1;break;}
        }
       if(l==1)break;
    }
       if(l==1){printf("yes\n");}
       if(l==0){printf("no\n");}
     
    return 0;
}