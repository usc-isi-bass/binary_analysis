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
	int a[100],b;
	
	scanf("%d",&a[0]);
	for(b=0;b<100;b++)
	{
		if(a[b]%2!=0&&a[b]!=1)
		{
			a[b+1]=a[b]*3+1;
			printf("%d*3+1=%d\n",a[b],a[b+1]);
		}
		else if(a[b]%2==0)
		{
			a[b+1]=a[b]/2;
			printf("%d/2=%d\n",a[b],a[b+1]);
		}
		else
		{
			printf("End");
		
		break;
		}
	}
	
    return 0;
}

