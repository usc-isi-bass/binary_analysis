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
	char c[100][100];
	int i=0,t;
	while(scanf("%s",c[i])!=EOF)
    {
		c[i];
	    i++;
	}
	t=i-1;
	for(i=t;i>=0;i--)
		if(i!=0)
		printf("%s ",c[i]);
		else printf("%s",c[0]);
}
