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
	int n, i, sum = 0;
	scanf("%d", &n);
    for(i = 1; i <= n; i++)
	{	
		
		sum = sum + i * i;
		if(i % 7 == 0 || i % 10 == 7 || i - 70 == 1 || i - 70 == 2 || i - 70 == 3 || i - 70 == 4 || i - 70 == 5 || i - 70 == 6 || i - 70 == 8 || i - 70 == 9){
		   sum = sum - i * i;
	
		}
	
    }
	
	printf("%d", sum);
	return 0;
}