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
	int m,n,i,j,a[12]={100},b[12]={100};
	scanf("%d%d",&m,&n);
	a[0]=m;
	b[0]=n;
	for(i=0;a[i]>=1;i++)
	{
		a[i+1]=a[i]/2;

	}

	for(j=0;b[j]>=1;j++)
	{
		b[j+1]=b[j]/2;

	}

   while(1)
	{if(a[i]!=b[j])
	break;
	   i--;j--;

	}
		
	printf("%d\n",a[i+1]);
	return 0;
}