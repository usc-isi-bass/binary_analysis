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
    char zfc[N][N];
	int n;
	int cd[N];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		cd[i]=strlen(zfc[i]);
	}
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<cd[i];j++)
		{
		switch(zfc[i][j])
			{
				case'A':
					printf("%c",'T');
					break;
				case'T':
                    printf("%c",'A');
					break;
				case'C':
 					printf("%c",'G');
					break;
				case'G':
                    printf("%c",'C');
					break;
			}
			if(j==cd[i]-1)
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
