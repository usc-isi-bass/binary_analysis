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


int main(int argc, char* argv[])
{
    int a[16],i,j,k,count=0;
	for(;;)
	{
		count=0;
		scanf("%d",&a[0]);
		if(a[0]==-1)break;
		else
		{
			for(i=1;;i++)
			{
				scanf("%d",&a[i]);
				if(a[i]==0)break;
			}
			for(j=0;j<i;j++)
			{
				for(k=j;k<i;k++)
				{
					if(a[j]==a[k]*0.5||a[j]==a[k]*2)count++;
				}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}