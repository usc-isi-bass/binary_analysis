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
	int a,b[3]={3,5,7},i;
	scanf("%d",&a);
	for(i=0;i<3;i++)
	{
		if(a%b[i]==0)
		{	printf("%d",b[i]);
		    if(a%b[i+1]==0&&i+1<3)
				putchar(' ');
			else if(a%b[i+2]==0&&i+2<3)
				putchar(' ');
		}
		else if(a%b[i]!=0&&a%b[i+1]!=0&&a%b[i+2]!=0)
			printf("n");
		
	}
}
