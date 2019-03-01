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
	char a[500];
	int i,j,k;
	gets(a);
	for(i=2;i<=strlen(a);i++)
	{
		for(j=0;j<strlen(a)+1-i;j++)
		{
			for(k=0;j+k<=j+i-k-1;k++)
			{
				if(a[j+k]!=a[j+i-k-1])
				break;
			}
			if(j+k>j+i-k-1)
			{
				for(k=0;k<i;k++)
				printf("%c",a[j+k]);
				printf("\n");
			}		
		}
	}
}