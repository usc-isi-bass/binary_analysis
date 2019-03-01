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
	int flag;
	char s[51],w[51];
	char *ps,*pw,*in;
	ps=s;
	pw=w;
	scanf("%s",ps);
	scanf("%s",pw);
	while (*pw!='\0')
	{
		in=pw;
		flag=1;
		for (ps=s;*ps!='\0';pw++,ps++)
			if (*pw!=*ps) 
			{
				flag=0;
				pw=in;
				break;
			}
		if (flag) 
		{
			printf("%d",in-w);
			break;
		}
		pw++;
	}
}