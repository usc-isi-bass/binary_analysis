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
    int s=0,n,i,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%u!=0)
		{
		  a=i;
		  while(a>0)
		  {
			if(a%g==u)
			  break;
			a=a/g;
		  }
		  if(a==0)
			s+=i*i;
		}
		printf("%d",s);
	return 0;
}