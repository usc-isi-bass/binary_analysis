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
	int i,j,k,counta=0,countc=0;
	scanf("%d",&n);
	char legal[81];
	getchar();

	for(i=0;i<n;i++)
	{
		gets(legal);
		k=strlen(legal);

		if(k==1)
		{
            countc=0;
			if((*(legal)>='A'&&*(legal)<='Z')||(*(legal)>='a'&&*(legal)<='z')||(*(legal)=='_'))
			{
				countc++;
			}
			if(countc==1)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}

		else
		{
			if((*(legal)>='A'&&*(legal)<='Z')||(*(legal)>='a'&&*(legal)<='z')||(*(legal)=='_'))
			{
                counta=0;
				for(j=1;j<k;j++)
				{
					if((*(legal+j)>='A'&&*(legal+j)<='Z')||(*(legal+j)>='a'&&*(legal+j)<='z')||
                    (*(legal+j)=='_')||(*(legal+j)>='0'&&*(legal+j)<='9'))
						counta++;
				}
				if (counta==k-1)
				{
					printf("1");
					printf("\n");
				}
				else
				{
					printf("0");
					printf("\n");
				}
			}
			else
			{
				printf("0");
				printf("\n");
			}
		}
	}
	return 0;
}
