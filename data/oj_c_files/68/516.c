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
	int n,a,b,c,k,e,f;
	k=6;
	scanf("%d",&n);
	while(k<=n)
	{
	 for(a=3;a<=k&&k-a>1;a=a+2)
	 {b=k-a;
	     e=sqrt(a);
	     f=sqrt(b);
	 for(c=3;c<=e||c<=f;c=c+2)
	 {if((a%c==0&&a/c>1)||(b%c==0&&b/c>1))
		 break;}
	  if(c>e&&c>f)
	  {printf("%d=%d+%d\n",k,a,b);
	  break;}}
 k=k+2;
}
	return 0;
}