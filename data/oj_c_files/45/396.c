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
	char s[100],w[100],*p;
	int i,bl,j=0;
	scanf("%s%s",s,w);
	p=s;
	do
	{
		bl=1;
		for (i=0;i<strlen(s)-1;i++)
			if (*(p+i)!=*(w+i+j)) bl=0;
		if (bl)
		{
			printf("%d\n",j);
			break;
		} 
		else j++;
	} while (p<s+strlen(w));
}