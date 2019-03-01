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
	char a[100][100],c;
	int n,i,k;
	for(i=0;;i++)
	{
		scanf("%s",a[i]);
		if((c=getchar())=='\n')
			break;
	}
	for(;i>=0;i--)
	{
		printf("%s",a[i]);
		if(i!=0)
			printf(" ");
	}
}