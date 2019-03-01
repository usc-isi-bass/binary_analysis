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
	char a[256],t;
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",&a);
	for(j=0;j<strlen(a);j++)
		{
			
			switch(a[j])
			{
			case'A':
				t='T';
				break;
			case'T':
				t='A';
				break;
			case'C':
				t='G';
				break;
			case'G':
				t='C';
				break;
			}
			printf("%c",t);
		}
	printf("\n");
	}
	
	return 0;
}
