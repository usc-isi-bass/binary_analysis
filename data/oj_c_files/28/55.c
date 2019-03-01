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
	char a[300][50],c;
	int i=0,j;
	scanf("%s",a[i++]);
	while((c=getchar())!='\n')
		scanf("%s",a[i++]);
	for(j=0;j<i;j++)
	{
		printf("%d",strlen(a[j]));
		if(j!=i-1)
			printf(",");
	}
}