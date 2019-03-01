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
	int n,i;
	scanf("%d",&n);
	getchar();
	char base[256],*p;
	for(i=0;i<n;i++)
	{
		scanf("%s",&base);
		p=base;
		for(;p<=&base[strlen(base)-1];p++)
		{
			if(*p=='A')
			{
				printf("T");
			}else if(*p=='T')
			{
				printf("A");
			}else if(*p=='C')
			{
				printf("G");
			}else
			{
				printf("C");
			}	
		}
		printf("\n");
	}
	return 0;
}