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
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char m;
		do
		{
			scanf("%c",&m);
			if (m=='A')
			{
				printf("T");
			}
			else if(m=='T')
			{
				printf("A");
			}
			else if(m=='G')
			{
				printf("C");
			}
			else if(m=='C')
			{
				printf("G");
			}
		}while(m!='\n');
		printf("\n");
	}
	return 0;
}
