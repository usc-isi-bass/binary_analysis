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
	char a[300];
	int i=0 ,n=0;
	while (1==1)
	{
		n=getchar();
		if(n==' ')
		{	
			if(i!=0)
			{
				printf("%d,",i);
				i=0;
			}
		}
		else if(n!='\0'&&n!='\n')
		{
			i++;	
		}
		else if(n=='\n')
		{
			printf("%d",i);
			break;
		}
	}
}
