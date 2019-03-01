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
	int n, k, m;
	int cal(int monkey, int rest);
	scanf("%d %d", &n, &k);
	m=cal(n, k);
	printf("%d\n", m);

	return 0;
}

int cal(int monkey, int rest)
{
	int i, j, num, nummin;
	int a[10000];
	for(i=0; i<10000; i++)
	{
		a[i]=0;
    }
	nummin=1;
	while(nummin>=1)
	{
		num=nummin;
		num=num*monkey+rest;
		for(i=2; i<=monkey; i++)
		{
			num=num*monkey/(monkey-1)+rest;
			a[i]=num;
			if(num%monkey!=rest)
			{
				nummin++;
				for(j=0; j<=monkey; j++)
				{
					a[j]=0;
                }
				break;
			}
		}
		if(a[monkey]%monkey==rest)
		{
			break;
        }
	}
	return(num);
}
