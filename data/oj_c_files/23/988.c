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
	char a[80][20],*p[80],**q,t;
	int i;
	for(i=0;i<=79;i++)
		p[i]=a[i];
	for(q=p;;q++)
	{
		scanf("%s",*q);	
		t=getchar();
		if(t!=' ') break;
	}
	for(;q>=p+1;q--)
		printf("%s ",*q);
	printf("%s",*q);
}