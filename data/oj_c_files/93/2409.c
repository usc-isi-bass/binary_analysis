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

void main()
{
	int i,m,j;
	scanf("%d",&m);
	if ((m%3!=0)&&(m%5!=0)&&(m%7!=0)) printf("n");
	else for (i=3;i<=7;i=i+2) 
	{
		if (m%i==0) 
		{
			printf("%d",i);
			for (j=i+2;j<=7;j=j+2) 
			{
				if(m%j==0) 
				{
					printf(" ");
					break;
				}
			}
		}
	}
}