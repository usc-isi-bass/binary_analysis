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
	int i,num=0,n;
	char s[10000];
	gets(s);
	n=strlen(s);
	for(i=0;i<=n;i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
			num++;
		else if(s[i]==' ')
		{
			if(num==0)
				continue;
			else {printf("%d,",num);
			num=0;}
		}
		else if(s[i]=='\0')
			printf("%d\n",num);
	}
}