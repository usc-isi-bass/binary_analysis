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
	char c1[100],c2[100],*p;
	int i,j,k,n=0,m;
	scanf("%s",c1);
	scanf("%s",c2);
	p=strstr(c2,c1);
	for(i=0;c2[i]!='\0';i++)
		if(&c2[i]==p)break;
	printf("%d",i);
}