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
	char str1[100];
	int n,i,m;
	gets(str1);
	n=strlen(str1);
	for(i=n-1;i>=0;i--)
	{
		if(str1[i]==' ')
		{
			for(m=i+1;m<n;m++)
				printf("%c",str1[m]);
				n=i;
				printf(" ");
		}
	}
	for (m=0;m<n;m++)
	printf("%c",str1[m]);

	return 0;
}
