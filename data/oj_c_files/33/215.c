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
	int n,i,j;
	char a[1000][257];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			switch(a[i][j])
			{
			case'A':
				a[i][j]='T';
				break;
			case'G':
				a[i][j]='C';
				break;
			case'C':
				a[i][j]='G';
				break;
			case'T':
				a[i][j]='A';
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
		if(i!=n-1)
		{
			printf("\n");
		}
	}

	return 0;
}
