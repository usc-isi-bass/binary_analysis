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
	char s[50],w[50],*p;
	int i,k;
	scanf("%s %s",s,w);
	for(p=w;p<(w+strlen(w));p++)
	{
		k=0;
		for(i=0;i<strlen(s);i++)
			if(*(p+i)!=s[i])
				k=1;
		if(k==0)
		{
			printf("%d\n",p-w);
			break;
		}
	}
}