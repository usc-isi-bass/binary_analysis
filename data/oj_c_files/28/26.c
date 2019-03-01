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
	char a[10000];
	int i=0,k=0,m=1,b[300]={0},l=0;
	while((a[i]=getchar())!='\n')
	{
		i++;k++;
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==' '&&a[i+1]!=' ')
		{
			m++;l++;
		}
		if(a[i]!=' ')
			b[l]++;
	}
	for(i=0;i<m-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[m-1]);
}