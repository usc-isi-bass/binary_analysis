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
	char *p[100],end='\n';
	int i,count;
	for(i=0;;i++)
	{
		p[i]=(char *)malloc(20*sizeof(char));
		scanf("%s",p+i);
		if(end==getchar()) 
		{
			count=i;
			break;
		}
	}
	for(i=count;i>0;i--)
		printf("%s ",p+i);
	printf("%s",p+i);
}