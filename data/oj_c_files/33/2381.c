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
	char a;//[300];
	scanf("%d",&n);
	scanf("%c", &a);
	while (n--)
	{
		while (1)
		{
			scanf("%c", &a);
			if(a=='A')
				printf("T");
			if(a=='T')
				printf("A");
			if(a=='C')
				printf("G");
			if(a=='G')
				printf("C");
			if (a=='\n') {
				printf("\n");
				break;
			}
		}
		//memset(a, 0, sizeof(a)); 
	}
	return 0;
}