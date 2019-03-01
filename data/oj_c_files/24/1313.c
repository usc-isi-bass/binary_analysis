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
	int n,a,b,c,len;
	unsigned maxlen,minlen;
	char max[20],min[20];
	char cen[20];
	scanf("%s",&cen);
	len=strlen(cen);
	maxlen=minlen=len;
	strcpy(max,cen);
	strcpy(min,cen);
	while(getchar()!='\n')
	{
		scanf("%s",&cen);
		if(strlen(cen)>maxlen)
		{
		strcpy(max,cen);
		maxlen=strlen(cen);
		}
		if(strlen(cen)<minlen)
		{			
		strcpy(min,cen);
		minlen=strlen(cen);
		}

	}
	printf("%s\n",max);
	printf("%s\n",min);
	
}
