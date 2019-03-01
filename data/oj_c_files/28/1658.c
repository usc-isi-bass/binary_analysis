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
	char a[1000];
	int num[300]={0},j=0,x;
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]!=' '&&i!=len-1)
		{
			num[j]++;
		}
		else if(a[i]==' '&&i!=len-1)
		{
			j++;
		}
		else if(i=len-1)
		{
			x=j;
		}

	}
	for(j=0;j<x;j++)
	{
		if(num[j]!=0)
		{
		    printf("%d,",num[j]);
		}
	}
	printf("%d",num[x]+1);
	return 0;
}