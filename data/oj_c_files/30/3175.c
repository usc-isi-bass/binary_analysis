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
	int n,x,y,z;
	int sum = 0; 

	scanf("%d",&n);
	int i = n;
	while(i>0)
	{
		x = i%7;
	        y = i/10;
		z = i%10;
		
		if (x==0||y==7||z==7){
                            i--;
			continue;
}
		sum = sum + i*i;
		i--;
	}
	printf("%d",sum);
    return 0;
}
