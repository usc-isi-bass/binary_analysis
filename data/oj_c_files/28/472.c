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
	char a[1000];
	int b[300]={0},i,n,j=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{    
		if(a[i]==' ')
			j=j+1;
		else
			b[j]=b[j]+1;
	}
	printf("%d",b[0]);
	for(j=1;j<300;j++)
		if(b[j]!=0)
			printf(",%d",b[j]);
}