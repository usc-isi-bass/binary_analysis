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
	char a[10000];
	gets(a);
	int s=strlen(a);
	for(int i=0;i<s-1;i++)
	{
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
			if(a[i+1]==' ')
			{
				printf(" ");
			}
		}
	}
	printf("%c",a[s-1]);
}