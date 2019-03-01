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
	int z[6][6];
	int a,b,c,e,f;
	f=0;
	for (a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			scanf("%d",&z[a][b]);
		}
	}
    for (a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			e=0;
			for(c=1;c<=5;c++)
			{
				if (z[a][b]<=z[a][c]) e+=1;
				if (z[a][b]>=z[c][b]) e+=1;
			}
			if (e==2) 
				{
					printf("%d %d %d",a,b,z[a][b]);
					f=1;
				}
		}
	}
	if (f==0) printf("not found");
	return 0;
}