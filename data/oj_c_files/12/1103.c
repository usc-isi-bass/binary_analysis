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
    int i=0,j=0,k=0;
    int a[16];
    for(;;i++)
    {
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			printf("%d\n",k);
			i=-1;
			k=0;
		}

		if(a[0]==-1)
			break;

		for(j=0;j<i;j++)
			if(a[i]==a[j]*2||a[j]==a[i]*2)
				k++;
	}
}