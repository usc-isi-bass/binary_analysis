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
	int num=0,i=0,j=0;
	char s[1000]={0};
	gets(s);
line:while(s[j]!='\0')
	{
		while((s[j]!=' ')&&(s[j]!='\0'))
		{
			num++;
			j++;
		}
		if(num==0)
		{
			j++;
			goto line;
		}
		if(s[j]==' ')
			printf("%d,",num);
		if(s[j]=='\0')
			printf("%d",num);
		j++;
		num=0;
	}
}

