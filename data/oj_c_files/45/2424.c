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
	char first[50],second[50];
	char *p,*q;
	int i,court;
	p=first;
	q=second;
	scanf("%s %s",p,q);
	for(i=0;*q!='\0';i++,q++)
	{
		if(*q==*p)
			p++;
		else
			p=first;
		if(*p=='\0')
		{
            court=i;
			break;
		}
	}
	printf("%d\n",court-strlen(first)+1);
	return 0;
}