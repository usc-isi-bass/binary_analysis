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
	char s[50],w[50];
	int i;
	char *p1,*p2,*p;


	scanf("%s %s",s,w);
	p1=s;
	p2=w;
	p=strstr(p2,p1);

	for(i=0;i<50;i++)
		if(*p==w[i])
		{
			printf("%d",i);
			break;
		}
}



