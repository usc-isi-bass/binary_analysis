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

char a[10000][256];
void main()
{
	int n;
	int i,j;
	
	char p[256];
	p['A']='T';
	p['T']='A';
	p['C']='G';
	p['G']='C';
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
		for(j=0;a[i][j]!='\0';j++)
		{
			printf("%c",p[a[i][j]]);
			if(a[i][j+1]=='\0')printf("\n");
		}
	}

	
}