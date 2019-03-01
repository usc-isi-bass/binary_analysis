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
	char str[100000]={'\0'};
	int n,i,len,temp=-1;
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		str[i+1]=str[i];
	}
	str[0]=' ';
	for(i=0;i<=n;i++)
	{
		if(str[i]==' ')
		{
			len=i-temp-1;
			temp=i;
			if(len!=0)
				printf("%d,",len);
		}
	}
	printf("%d",(n-temp));
}