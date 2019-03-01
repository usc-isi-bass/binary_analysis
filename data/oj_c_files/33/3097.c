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
	int n,i,j;
	char a;
	scanf("%d",&n);
    scanf("%c",&a);
	for(i=0;i<n;i++)
	{
        
		for(j=0;j<260;j++)
		{
			
			scanf("%c",&a);
			if(a=='\n')
			{
				printf("\n");
				break;
			}
			else if(a=='A')
			{
				printf("T");
			}
			else if(a=='T')
			{
				printf("A");
			}
            else if(a=='G')
			{
				printf("C");
			}
            else if(a=='C')
			{
				printf("G");
			}
		}
	}
	return 0;
}