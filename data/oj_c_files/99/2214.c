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


int main(int argc, char* argv[])
{
	int n, age[100], i, a=0, b=0, c=0, d=0;
	

	scanf("%d\n", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &age[i]);
		if(age[i] > 60)
		{
			d++;
		}
		else if(age[i] <= 60 && age[i] >=36)
		{
			c++;
		}
		else if(age[i] <= 35 && age[i] >= 19)
		{
			b++;
		}
		else 
		{
			a++;
		}
	}

	

	printf("1-18: %.2lf%%\n", (double)a/n*100);
	printf("19-35: %.2lf%%\n", (double)b/n*100);
	printf("36-60: %.2lf%%\n", (double)c/n*100);
	printf("60??: %.2lf%%\n", (double)d/n*100);

	return 0;
}

