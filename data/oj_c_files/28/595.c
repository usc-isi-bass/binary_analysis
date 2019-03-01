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
	int i,j,k,p,n;
	gets(a);
	n=strlen(a);
	int b[300];
	for (i=0;i<300;i++) b[i]=0;
	j=0;p=0;
	for (i=0;i<n;i++)
	{
		
		if (a[i]!=' ') {p=1;b[j]++;}
		if (a[i]==' '&&p!=0) 
		{j++;p=0;}
	}
	printf("%d",b[0]);
	for (i=1;i<300;i++)
		if (b[i]!=0) printf(",%d",b[i]);
}
		
		




