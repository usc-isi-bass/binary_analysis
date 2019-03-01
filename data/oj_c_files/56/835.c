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

void main ()
{
	
	char num[5];
	int i,flag=0,j;
	for (i=0;flag==0;i++)
	{
		scanf("%c",&num[i]);
		if (num[i]>'0'&& num[i]<='9')
			flag=0;
		else
			flag=1;
	}
	for (j=i-2;j>=0;j--)
		printf("%c",num[j]);


}