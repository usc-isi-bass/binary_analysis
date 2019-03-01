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

main()
{  int n,m,i,j,k;
   int a[1000];
 
 
 for (;;)
  { 
   scanf("%d %d",&n,&m);
   if(n==0&&m==0) break;
   else
{  for(i=1;i<=n;i++)
         a[i]=i;
   for(k=1,i=1;i<=n-1;i++)
   { k=(k+m-2)%(n+1-i)+1;
      for(j=k;j<=n-i;j++)
      a[j]=a[j+1];  }
 printf("%d\n",a[1]); 
}
}

}
