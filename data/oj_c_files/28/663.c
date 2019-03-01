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
	char a[10000]={0};
	gets(a);
	int s[400]={0};
	int i;
	int j=0;
	for(i=0;i<10000;i++)
	{
		
		if(a[i]!=' '&&a[i]!='\0')
		{
			s[j]++;
		}
		else if(a[i]==' '&&a[i+1]!='\0'&&a[i]!='\0'&&a[i+1]!=' ')
		{
			j++;
		}
	}
	for(i=0;i<=j-1;i++)
	{
		printf("%d,",s[i]);
	}
	printf("%d\n",s[j]);
	return 0;
}