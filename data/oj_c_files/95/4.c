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

int main()
{
	int i,j,n;
	char a[2][100];
	gets(a[0]);
	gets(a[1]);
	for(i=0;i<2;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]<='z'&&a[i][j]>='a')
				a[i][j]-=32;
		}
	}
	n=strcmp(a[0],a[1]);
	if(n==1)
		printf(">");
	else if(n==0)
		printf("=");
	else if(n==-1)
		printf("<");
	return 0;
}