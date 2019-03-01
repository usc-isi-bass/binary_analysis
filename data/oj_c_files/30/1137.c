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
	int i,n,k=0;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{      
		if((i%7)!=0&&(i%10)!=7&&(i<70))
		{
			k=k+i*i;
		}
                if((i%7)!=0&&(i%10)!=7&&(i>79))
		{
			k=k+i*i;
		}
	}
	printf("%d",k);
	return 0;
}

