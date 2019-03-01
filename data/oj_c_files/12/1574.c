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
    int a[20],i=0,j=0,n=0;
	while(scanf("%d",&a[i]),a[i]!=-1)
	{
		while(scanf("%d",&a[i+1]),a[i+1]!=0)
			i=i++;
      for(i=0;a[i]!=0;i++)
		  for(j=i;a[j]!=0;j++)
		  {
			  if(a[i]==2*a[j]||2*a[i]==a[j])
				  n=n++;
		  }
		  printf("%d\n",n);
		  n=0;
i=0;
	}
	return 0;
}
