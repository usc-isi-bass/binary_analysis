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
	char a[2000];
	int b[300]={0},i,j;
	gets(a);
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
			b[j]=b[j]+1;
		else if(a[i]==' '&&a[i-1]!=' ')
			j++;
	}
	for(i=0;i<j;i++)
		printf("%d,",b[i]);
	printf("%d",b[j]);

}