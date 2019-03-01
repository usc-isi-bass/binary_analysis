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
	int n,l,i,j;
    char c[256];
	char d[5]="ATCG";
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			if(c[j]==d[0])
			{
				printf("T");
			}
            if(c[j]==d[1])
			{
				printf("A");
			}
            if(c[j]==d[2])
			{
				printf("G");
			}
            if(c[j]==d[3])
			{
				printf("C");
			}
		}
		printf("\n");
	}
	return 0;
}
