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


int ss(int n)            /*??n????????????1?????0*/
	{
	int i;
	for (i=2; i<=(int)sqrt(n); i++)
		if (n%i==0) 
			return 0;
			return 1;
	}

int main()
{
	int i,j,iLine,m;
	scanf("%d",&m);
	for (i=6; i<=m; i+=2)
		for (j=3; j<i; j++) 
		{
			if (ss(j)&&ss(i-j)) 
			{
				printf("%d=%d+%d\n",i,j,i-j);
				iLine++;
			if (iLine%5==0) putchar('\r');
				break;
			}
		}
 return 0;
}
