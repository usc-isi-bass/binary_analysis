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
	char a[256],b[256],c[256];
	gets(a);
	gets(b);
	gets(c);
	char *t;
	t=strstr(a,b);
	if(t==NULL)
	{
		printf("%s",a);
		return 0;
	}
	else 
	{
		char f=t-a;
		int d=strlen(a),e=strlen(c);
		int i=f,j;
		for(j=0;j<e;j++)
		{
			a[i]=c[j];
			i++;
			if(i==t-a+e)
				break;
		}
	}
	printf("%s",a);
}