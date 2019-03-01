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
	int monkey[500], r[500],i,j,m,n,left,count,time=0;

		/*
		*	?????
		*	monkey???????????
		*	r???????????????????????
		*	left????????
		*	count????
		*	time??????????????0 0?
		*/

	scanf("%d%d", &m, &n);
	while(m!=0 && n!= 0)
	{
		//??????????????
		for(i=0; i<m; i++)
		{
			monkey[i] = 1;
		}

		left = m;
		count = 0;
		while(left > 1)
		{
			for(i=0; i<m; i++)
			{
				if(monkey[i])
					count ++;
				if(count == n)
				{
					monkey[i] = 0;
					left --;
					if(left == 1) break;
					count = 0;
				}
			}
		}
		
		//?????????????????
		for(i=0; i<m; i++)
		{
			if(monkey[i]) 
				r[time] = i;
		}

		scanf("%d%d", &m, &n);
		time ++;
	}

	for(i=0; i<time; i++)
	{
		printf("%d\n", r[i]+1);
	}
	
	return 0;
}