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
	int i,j,a[300],k=0;
	char s[1000000];
	gets(s);
	i=0;j=0;
	while(s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			j++;
			if((s[i+1]==' ')||(s[i+1]=='\0'))
			{
				a[k]=j;
				j=0;
				k++;
			}
			i++;
		}
		else i++;
	}
	if(k==2)printf("%d",a[0]);
	else
	{
		for(i=0;i<k-1;i++)printf("%d,",a[i]);
		printf("%d",a[k-1]);
	}
}