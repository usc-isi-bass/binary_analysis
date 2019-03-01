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
    int n;
	scanf("%d",&n);
	int i;
	char a[2000];
	for(i=0;i<=n;i++)
	{
       gets(a);
int j;
	   for(j=0;j<strlen(a);j++)
		{
			switch(a[j])
			{
			case 'A':
				a[j]='T';
				break;
			case 'T':
				a[j]='A';
				break;
				case 'C':
				a[j]='G';
				break;
				case 'G':
				a[j]='C';
				break;
			}
		}
		int k;
		for(k=0;k<strlen(a);k++)
		{
			printf("%c",a[k]);
		}
		printf("\n");
	}
	return 0;
}
