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
	char str[50][100],b;
	int i,j=0;
	for(i=0;i<100;i++)
	{
		scanf("%s",str[i]);
			b=getchar();
		if(b!=' ')break;j++;
	}
    for(i=j;i>0;i--)
		printf("%s ",str[i]);
	printf("%s",str[0]);
}