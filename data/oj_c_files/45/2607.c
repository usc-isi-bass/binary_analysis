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
	char a[50]={0},b[50]={0},c[50][50]={0};
	int changdu1,changdu2,i,j;
	scanf("%s",a);
	scanf("%s",b);
	changdu1=strlen(a);
	changdu2=strlen(b);
	for(i=0;i<changdu2-changdu1+1;i++)
	{
		for(j=0;j<changdu1;j++)
			c[i][j]=b[j+i];
	}
	for(i=0;i<changdu2-changdu1+1;i++)
	{
		if(strcmp(c[i],a)==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}