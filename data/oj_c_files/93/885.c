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
	int n,i,j=3,flag=0;
	scanf("%d",&n);
	for (i=3;i<=7;i+=2)
	{
		if (n%i==0&&flag==0) 
		{
			printf("%d",i);
			flag=1;
		}
		else if (n%i==0&&flag==1) printf(" %d",i);
		else j--;
	}
	if (j==0) printf ("n");
	return 0;
}