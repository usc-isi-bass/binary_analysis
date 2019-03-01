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
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char line[256];
		scanf("%s",&line);
		for(int j=0;j<256;j++)
		{
			if(line[j]=='A')
			{
				printf("T");
			}
			else if(line[j]=='T')
			{
				printf("A");
			}
			else if(line[j]=='C')
			{
				printf("G");
			}
			else if(line[j]=='G')
			{
				printf("C");
			}
			else
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}