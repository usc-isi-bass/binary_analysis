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
	char str[9000],a[100][10]={'\0'};
	gets(str);
	int len,i,k,j;
	len=strlen(str);
	k=0;
	for(i=0;i<len;i++)
	{
		j=0;
		while(str[i]!=' '&&i<len)
		{
			a[k][j]=str[i];i++;j++;
		}
		k++;
	}

	for(i=k-1;i>0;i--)
		printf("%s ",a[i]);
	printf("%s",a[0]);
}