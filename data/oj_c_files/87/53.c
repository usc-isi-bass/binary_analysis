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
	int a[6];
	int b[10];
	int i;
	while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0)
	{
		for(i=0;i<=5;i++)
		{
			scanf("%d",&a[i]);
		}
		if(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0||a[4]!=0||a[5]!=0)
		{
			if(a[5]>=a[2])
			{
				b[2]=a[5]-a[2];
			}
			else
			{
				b[2]=a[5]-a[2]+60;
				a[4]--;
			}
			if(a[4]>=a[1])
			{
				b[1]=a[4]-a[1];
			}
			else
			{
				b[1]=a[4]-a[1]+60;
			    a[3]--;
			}
			b[0]=a[3]-a[0]+12;
			printf("%d\n",b[0]*3600+b[1]*60+b[2]);
		}
		else
		{
			break;
		}
	}
	return 0;
}