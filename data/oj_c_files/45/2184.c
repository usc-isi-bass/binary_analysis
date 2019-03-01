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
	char a[50], b[50];
	int i, j, p;
	scanf("%s%s", a, b);
	for(i=0; i<=strlen(b)-strlen(a); i++)
	{
		p=1;
		for(j=0; j<strlen(a); j++)
			if(b[i+j]!=a[j])
				p=0;
		if(p) break;
	}
	printf("%d\n", i);
}