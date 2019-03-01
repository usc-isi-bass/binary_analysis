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
	int i=0;
	char *p[100];
	p[i]=(char *)malloc(100);
	while(scanf("%s",p[i])!=EOF)
	{i++;	p[i]=(char *)malloc(100);}
	for(i--;i>0;i--)
		printf("%s ",p[i]);
	printf("%s",p[0]);
}
	
