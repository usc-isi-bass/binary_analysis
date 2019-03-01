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
	int i,m,j,k,l,n;
	char c[11]={' '},cc[4]={' '};
	while(!(feof(stdin)))
	{
		scanf("%s%s\n",c,cc);
		l=strlen(c)-1;
		m=0;
		for (i=0;i<=l;i++)
			if (c[i]>c[m]) m=i;
		for (i=0;i<=m;i++)
			putchar(c[i]);
		printf("%s",cc);
		for (i=m+1;i<=l;i++)
			putchar(c[i]);
		printf("\n");
	}
	return 7;
}