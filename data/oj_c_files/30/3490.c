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
	int a, n ,sum=0;
	 scanf("%d",&a);
	 for(n=1;n<=a;n++)
	 {
		 if(n%7==0)
			 sum=sum;

		 else if(n%10==7)
			 sum=sum;



		 else if (n%10!=7&&(n/10)%10==7)
			 sum=sum;
		 else
			 sum += n*n;
     }
	printf("%d",sum);
	return 0;
}