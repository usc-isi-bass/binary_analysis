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

// ????.cpp : ??????????????
//



int main()
{
	char a[100][100];
	int l[100],i=0,j,k,p;
	for(i=0;i<=100;++i)
	{
		for(j=0;j<=100;++j)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]==' '||a[i][j]=='\n') break;
		}
		if(a[i][j]==' ') a[i][j]='\0';
		if(a[i][j]=='\n') 
		{
			a[i][j]='\0';
			break;
		}
	}
	printf("%s",a[i]);
	for(k=i-1;k>=0;--k)
	{
		printf(" %s",a[k]);
	}
	return 0;
}
