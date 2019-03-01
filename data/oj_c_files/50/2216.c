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

int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
main()
{
int n,i;
int g,k,w,d=1,month=1;
scanf("%d",&n);
w=n;
for(i=1;i<=365;i++)
{w++;
   
   if(w==8)
     w=1;
   d++;
     if(d>m[month])
  {  month++;
     d=1;
}
if(d==13&&w==5)
printf("%d\n",month);

}

}
