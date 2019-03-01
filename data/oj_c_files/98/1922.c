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
	char x[1000][41];
	int a,b,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s",x[i]);
	}
	x[a][0]='\0';
	b=strlen(x[0]);
	for(i=0;i<a;i++)
	{
		b+=strlen(x[i+1]);
		if(b>=80)
		{
			printf("%s\n",x[i]);
			b=strlen(x[i+1]);
		}
		else if(i==a-1)
		{
			printf("%s",x[i]);
		}
		else 
		{printf("%s ",x[i]);
		b++;}

	}


	return 0;
}