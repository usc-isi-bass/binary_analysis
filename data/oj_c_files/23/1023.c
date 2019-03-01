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
	char *p[300];
	int i=0,k;
	p[i]=(char*)malloc(30*sizeof(char));
	while(scanf("%s",p[i])!=EOF)
	{
		i++;
		p[i]=(char*)malloc(30*sizeof(char));
	}
	k=i-1;
	for(i=k;i>=0;i--)
	{
		if(i==k) printf("%s",p[i]);
		else printf(" %s",p[i]);
	}
}