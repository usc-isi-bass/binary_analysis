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
	int b[300],f=0,i,j;
	gets(a);
    for (i=0,j=0;a[i]!='\0';i++)
	{
		if (a[i]==' '&&f==0) {continue;}
		else if (a[i]==' ') {b[j]=f;f=0;j++;continue;}
		else {f++;}
	}
	b[j]=f;
	printf("%d",b[0]);
	for (i=1;i<=j;i++)
	printf(",%d",b[i]);
}
