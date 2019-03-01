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
	int i = 0, j = 0, total = 0 , n = 0, m = 0,temp = 0;
	scanf("%d",&n);
	
	for(i = 0; i < n ; i++)
	{
		scanf("%d",&m);
		total = 60;
		for( j = 0;j < m ; j++)
		{
			scanf("%d",&temp);
			if(temp > total)
			break;
			if(temp + 3 >= total)
			{
				total = temp;
				break;
			}
			else 
			{
				total -= 3;
			}
		}
		printf("%d\n",total);
		while((getchar())!='\n')
		continue;
	}

	return 0;
}