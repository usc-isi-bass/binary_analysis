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

/*??-?????From Whf)*/
void main()
{
	char a[300],t;
	int i,f=0,s;
	gets(a);
	for(t='a';t<='z';t++)
	{for(s=i=0;i<strlen(a);i++)
		if(a[i]==t)
		{s++;
		 f=1;
		}
	 if(s!=0)
		 printf("%c=%d\n",t,s);
	}
	if(f==0)
		printf("No\n");
}