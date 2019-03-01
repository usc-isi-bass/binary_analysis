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
	int a,b[100],i;
	scanf("%d",&a);
	for(i=a;i>0;i--)
	{
		scanf("%d",&(b[i-1]));
	}
	for(i=0;i<a;i++)
	{
		switch(a-1-i)
		{
		case 0:
			printf("%d",b[i]);
			break;
		default:
			printf("%d ",b[i]);
			break;
		}
	}
	return 0;
}