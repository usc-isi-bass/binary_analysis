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
	int y,m,d,sum=0;
	int i=0;
	int n[12];
	sum=0;
	scanf("%d%d%d",&y,&m,&d);

	if((y % 4 ==0) && (y % 100 != 0))
	{   n[0] = 31;
	    n[1] = 29;
		n[2] = 31; 
		n[3] = 30;
		n[4] = 31;
		n[5] = 30;
		n[6] = 31;
		n[7] = 31;
		n[8] = 30;
		n[9] = 31;
		n[10] = 30;
		n[11] = 31;
	    for(i = 0; i < m-1;i++)
		{  
			sum += n[i];
		}
		sum += d;
		printf("%d\n",sum);
	}

	if((y % 4 == 0) && (y % 100 == 0) && (y % 400 != 0))
	{
		n[0] = 31;
	    n[1] = 28;
        n[2] = 31; 
	    n[3] = 30;
	    n[4] = 31;
	    n[5] = 30;
	    n[6] = 31;
	    n[7] = 31;
	    n[8] = 30;
		n[9] = 31;
		n[10] = 30;
		n[11] = 31;
	   for(i = 0; i < m - 1;i++)
		{
			sum += n[i];
		}
		sum += d;
		printf("%d\n",sum);
	}
    if((y % 4 == 0) && (y % 100 == 0) && (y % 400 == 0))
	{ 
		n[0] = 31;
	    n[1] = 29;
		n[2] = 31; 
		n[3] = 30;
		n[4] = 31;
		n[5] = 30;
		n[6] = 31;
		n[7] = 31;
		n[8] = 30;
		n[9] = 31;
		n[10] = 30;
		n[11] = 31;
	   for(i = 0; i < m - 1;i++)
		{  sum += n[i];
		}
		sum += d;
		printf("%d\n",sum);
	}

	if(y % 4 != 0)
	{  
		n[0] = 31;
	    n[1] = 28;
		n[2] = 31; 
		n[3] = 30;
		n[4] = 31;
		n[5] = 30;
		n[6] = 31;
		n[7] = 31;
		n[8] = 30;
		n[9] = 31;
		n[10] = 30;
		n[11] = 31;
	   for(i = 0; i < m - 1;i++)
		{  sum = sum + n[i];
		}
		sum = sum + d;
		printf("%d\n",sum);
	}
	return 0;
}