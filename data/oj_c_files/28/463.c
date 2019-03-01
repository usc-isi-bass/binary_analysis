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
	char sent[999];
	int l,i,k=0;
	gets(sent);
	l=strlen(sent);
	for(i=0;i<l;i++)
	{
		if(sent[i]!=' ')
			k++;
		if(sent[i]==' '&&i!=0&&k!=0)
		{
			printf("%d,",k);
			k=0;
		}
	}
	printf("%d\n",k);
}
