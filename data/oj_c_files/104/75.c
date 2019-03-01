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
	int a[1001],x,y,i;
	
	scanf("%d%d",&x,&y);
	
	for (i=0;i<1001;i++) a[i]=0;
	for (;x>0;)
	{
		a[x]=1;
		x=x/2;
	}
	for (;y>0;)
	{
		
		if (a[y]==1) {
			printf("%d\n",y);
			break;
		}
		y=y/2;
	}

	return 0;
}

