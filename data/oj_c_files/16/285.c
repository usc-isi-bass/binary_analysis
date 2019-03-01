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
	char c[5];
	int i, t, k, l;   //k???????i????????
	scanf("%s", c);
	k=strlen(c);
	l=k/2;
	for(i=0;i<l;i++)
	{t=c[i];c[i]=c[k-i-1];c[k-i-1]=t;}
	printf("%s",c);
	return 0;
	}