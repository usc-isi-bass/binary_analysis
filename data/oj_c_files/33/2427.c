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
	int i;
	char c;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		while(1)
		{
			scanf("%c",&c);
			if(c=='\n')
			{
			break;
			}
			else if(c=='A')
			{
				printf("T");
			}
			else if(c=='T')
			{
				printf("A");
			}
			else if(c=='G')
			{
				printf("C");
			}
			else if(c=='C')
			{
				printf("G");
			}
		}
        printf("\n");
		
	}
	
	return 0;
}