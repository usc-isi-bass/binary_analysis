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
	char zfc[10000],zu[500][50];
	int len[500],i,j=0,k=0;
	gets(zfc);
	for(i=0;i<=strlen(zfc);i++)
	{
		if(zfc[i]==' ')
		{
			zu[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			zu[j][k]=zfc[i];
			k++;
		}
	}
	for(i=0;i<j+1;i++)
	{
		len[i]=strlen(zu[i]);
	}
	for(i=0;i<j;i++)
	{
		if(len[i]!=0)
		{
		   printf("%d,",len[i]);
		}
	}
	printf("%d",len[j]);
	return 0;
}

