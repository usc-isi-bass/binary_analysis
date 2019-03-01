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

main()
{
	char a[100]={0},b[100][100]={0},c[100]={0},d[100]={0};
	int i,j,m=0,n=1,k=0;
	gets(a);
	gets(c);
	gets(d);
	m=strlen(a);
	for(j=0;j<=m-1;j++)
		if(a[j]==32)
			n++;
	for(j=0;j<=n-1;j++)
	{
		for(i=0;a[k]!=32;i++)
		{
			b[j][i]=a[k];
			k++;
		}
		if(a[k]==32)
			k++;
	}
	for(j=0;j<=n-1;j++)
	{
		if(j)
			printf(" ");
		if(strcmp(b[j],c)==0)
			printf("%s",d);
		else
			printf("%s",b[j]);
	}
	printf("\n");
}