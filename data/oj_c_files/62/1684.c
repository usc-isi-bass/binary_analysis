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
	int n,kongge=0;
	char a[200];
	gets(a);
	n=strlen(a);
	for (int i=0;i<n;i++)
	{
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
			kongge=0;
		}
		else if(kongge==0)
		{
			printf(" ");
			kongge+=1;
		}
	}


	return 0;
}

