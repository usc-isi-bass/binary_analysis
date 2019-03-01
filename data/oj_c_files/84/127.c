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
{int a,b,n,c,i;
 scanf("%d",&n); 
 scanf("%d",&a);
 scanf("%d",&b);
 if(a<b){c=a;a=b;b=c;}
 for(i=1;i<=n-2;i++)
 {scanf("%d",&c);
  if(c<=b) continue;
  if(c>b&&c<=a) {b=c;continue;}
  if(c>a){b=a;a=c;}
 } 
 printf("%d\n%d\n",a,b);
}
