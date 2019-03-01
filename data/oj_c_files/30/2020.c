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
    int n, i, j, p, sum;
    scanf("%d", &n);

    sum=0;
    for(i=1; i<=n; i++)
    {
        p=0;     
		j=i;
		if(j%7==0) p=1;
		else
		{
			while(j>=7)
			{
				if(j%10==7)
				{
					p=1;
			 	    break;
				}
                j=(j-j%10)/10;
			}
		    if(p==0) sum+=i*i;
		}
    }

    printf("%d\n", sum);
    return 0;
}