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
	int k = 0;
	int max = 0;
	int a;
	int b;
    scanf("%d",&n);
	while(n != 0)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if (90 <= a && a <= 140 && 60 <= b && b<= 90)
			k++;
		else
			k = 0;
			
		if(max < k)
			max = k;
			
	   n--;
	}
	printf("%d",max);
	
   return 0;
}
