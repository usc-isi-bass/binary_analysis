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
	char s[101],a[100][20]={0};
	gets(s);
	int i,j=0,index=0,k=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			a[j][k]=s[i];
			k++;
		}
		else
		{
			a[j][k]='\0';
			j++;
			k=0;
		}
		
	}
	for(i=j;i>0;i--)
		printf("%s ",a[i]);
	printf("%s\n",a[0]);
}

