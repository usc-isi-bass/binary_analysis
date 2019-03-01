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
	int a[300]={0},len=0,i=0,flag=1,j;
	char c;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
			if(flag)
			{flag=0;len++;}
			else len++;
		else if(flag==0){flag=1;a[i]=len;len=0;i++;}
	}
	a[i]=len;
	for(j=0;j<i;j++)
		printf("%d,",a[j]);
	printf("%d\n",a[j]);
}