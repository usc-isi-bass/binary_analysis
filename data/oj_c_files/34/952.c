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

int hanshu(int number)
{ 
	int m;
	if(number==1)
		return number;
	else
	{
	    if(number%2!=0)
		{
           m=number*3+1;
		   printf("%d*3+1=%d\n",number,m);
		}
	    else if(number%2==0)
		{
		   m=number/2;
	       printf("%d/2=%d\n",number,m);
		}
	}
	return hanshu(m);
}
int main()
{
    int a;
	scanf("%d",&a);
	if(a==1)
		printf("End\n");
	else if(hanshu(a)==1)
        printf("End\n");
	return 0;
}
		