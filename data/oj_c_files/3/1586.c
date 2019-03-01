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
{  int n,k;
   int a[1000],b[1000];
    int i,j;
   scanf("%d %d",&n,&k);
   scanf("%d",&a[0]);
   for(i=1;i<n;i++)
   { scanf(" %d",&a[i]);
}
   for(i=0;i<n;i++)
   {   for(j=i+1;j<n;j++)
       if((a[i]+a[j])==k)
       {printf("yes");
       break;}
       if((a[i]+a[j])==k)
       {break;
}
   }
   if((a[i]+a[j])!=k)
   { printf("no");
}
           
   return 0;
}