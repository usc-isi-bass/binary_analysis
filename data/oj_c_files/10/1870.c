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

int max(int x,int y)
{  if(x>y) return x;
   else return y;
}

main()
{  int a[30];
   int b[30];
   int i,j,n,t;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=1;i<=n;i++)
   b[i]=1;
 
   for(i=n-1;i>=1;i--)
{   for(j=i+1;j<=n;j++)
      if(a[i]>=a[j])
      b[i]=max(b[i],b[j]+1) ;

}
t=b[1];
for(i=2;i<=n;i++)
t=max(t,b[i]);
printf("%d",t);
getchar();
getchar();
}
