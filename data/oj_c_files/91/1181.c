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
    char str[100];
	int i;
	gets(str);
	int n;
	n=strlen(str);
    for(i=0;i<(n-1);i++)
	{
		int p,q;
		p=(int)str[i];
		q=(int)str[i+1];
		printf("%c",p+q);
	}
	int p,q;
	p=(int)str[0];
	q=(int)str[n-1];
	printf("%c",p+q);
	return 0;
}