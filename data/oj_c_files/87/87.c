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
	int i,j,k,m,n,a[6];
	for(n=0;;n++)
	{
		k=0;
		for(i=0;i<6;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]!=0)
			k=1;
		}
		if(k==0)
		break;
		m=a[0]*3600+a[1]*60+a[2];
		n=(a[3]+12)*3600+a[4]*60+a[5];
		printf("%d\n",n-m);
	}
  	return 0;
}
