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
	char pupils[100],g;
	int i=0,j,k;
	gets(pupils);
	k=strlen(pupils);
	g=pupils[k-1];
	while (i<k)
	{
		if (pupils[i]==g)
		{
			j=1;
			while (pupils[i-j]==0) j++;
			pupils[i]=0;
			pupils[i-j]=0;
			printf("%d %d\n",i-j,i);
		}
		i++;
	}
}