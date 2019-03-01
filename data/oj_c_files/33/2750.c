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
	int n,i;
	char z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n");
		do
		{
			scanf("%c",&z);
			if(z=='A')
				printf("T");
			else if(z=='T')
				printf("A");
			else if(z=='C')
				printf("G");
			else if(z=='G')
				printf("C");
		}while(z!='\n');
		printf("\n");
	}
	return 0;
}