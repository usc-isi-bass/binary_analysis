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
	char a[51];
	char b[51];
	int i,j;
	int k;
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i]==b[j]&&a[i]!='\0'&&b[j]!='\0')
			{
				k=j-i;
				i++;
			}
		}
	}
	printf("%d\n",k);
	return 0;
}

