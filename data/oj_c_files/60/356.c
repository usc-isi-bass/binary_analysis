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

int prime(int n)
{
    int i=1;
 if (n==2)
 return(1);
 else if(n==1||(n%2==0))
 return(0);
 else
 {
 for(i=3;i<n;i=i+2)
 {
 if(n%i==0)
 {
 return(0);
 break;
}
}
if(i==n)
return(1);
}
}
main()
{
int n,a,b,c,d,i;
int count=0;
scanf("%d",&n);
for(i=2;i<=n-2;i++)
{
   a=i;
   b=i+2;
   c=prime(a);
   d=prime(b);
   if(c==1&&d==1)
   {printf("%d %d\n",a,b);
     count++;
     }
}
 if(count==0)
 printf("empty");
   getchar();
   getchar();
}
   
