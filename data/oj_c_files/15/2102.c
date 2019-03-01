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
 int i,j,n,x,a,b=0,c=0;
 scanf("%d",&n); 
 for(i=1;i<=n;i++)
 {a=0;
	 for(j=1;j<=n;j++)
	 {scanf("%d",&x);
      if(x==0)
      {b=b+1;
	  a=a+1;}}
    if(a==2)
	  c=c+1;}
printf("%d",(((b-2*c)-4)/2)*c);
return 0;
}
