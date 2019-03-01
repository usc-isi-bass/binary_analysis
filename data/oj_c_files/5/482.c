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
	double a;
	int i,j=0,b,c;
	char zfc[2][501];
	scanf("%lf",&a);
	for(i=0;i<2;i++)
	{
		scanf("%s",zfc[i]);
	}
	b=strlen(zfc[0]);
	c=strlen(zfc[1]);
	if(b!=c)
	{
		printf("error");
		return 0;
	}else
	{
	for(i=0;zfc[0][i]!='\0';i++)
	{
		if((zfc[0][i]!='A'&&zfc[0][i]!='T'&&zfc[0][i]!='C'&&zfc[0][i]!='G')||(zfc[1][i]!='A'&&zfc[1][i]!='T'&&zfc[1][i]!='C'&&zfc[1][i]!='G'))
		{
			printf("error");
			return 0;
		}
		else if(zfc[0][i]==zfc[1][i])
		{
			j++;
		}
	}
	}
	if((double)1.0*j/strlen(zfc[0])>a)
	{printf("yes");
	}else
	{
		printf("no");
	}
	return 0;
}