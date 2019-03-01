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
	int t,i,j;
	int a[10][21];
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
		scanf("%d\n",*(a+i));
	for(i=0;i<t;i++)
	{
		*(*(a+i)+2)=1;
		*(*(a+i)+1)=1;
		for(j=3;j<=**(a+i);j++)
			*(*(a+i)+j)=*(*(a+i)+j-1)+*(*(a+i)+j-2);
		printf("%d\n",*(*(a+i)+--j));
	}	
}	
