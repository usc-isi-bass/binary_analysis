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

void main()
{
	int n[300],count=0,i=0,j;
	char t;
	while(t=getchar(),t!='\n')
	{
		if(t==' ')
		{
			if(count!=0)
			{
				i++;
				n[i]=count;
				count=0;
			}
			goto next;
		}
		else count++;
next:;
	}
	n[i+1]=count;
	printf("%d",n[1]);
	for(j=2;j<=i+1;j++)
		printf(",%d",n[j]);
}