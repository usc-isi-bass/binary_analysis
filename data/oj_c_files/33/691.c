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
	char jj1[256]={0},jj2[256]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",jj1);
		for(j=0;j<strlen(jj1);j++)
		{
			switch(jj1[j])
			{
			case 'A':
				jj2[j]='T';
				break;
			case 'T':
				jj2[j]='A';
				break;
			case 'C':
				jj2[j]='G';
				break;
			case 'G':
				jj2[j]='C';
				break;
			default:
				break;
			}
		}
		jj2[j] = '\0';
		printf("%s\n",jj2);
	}
	return 0;
}