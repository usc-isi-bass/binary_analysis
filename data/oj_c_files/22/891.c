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
	int first,second,in;
	char c;
	second=0;
	scanf("%d",&first);
	scanf("%c",&c);
	while(c==',')
	{
		scanf("%d",&in);
		if(in>first)
		{
			second=first;
			first=in;
		}
		else
		{
			if(in==first)
				second=second;
			else
			{
			if(in>second)
				second=in;
			}
		}
		scanf("%c",&c);
	}
	if(second==0)
		printf("No");
	else
		printf("%d",second);
	
}
