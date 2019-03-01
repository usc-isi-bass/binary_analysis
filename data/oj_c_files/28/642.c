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
	char str[10000]={0};
	int n,i,j=1,flag=0;
	gets(str);
	n=strlen(str);
	for(i=0;i<=n;i++)
		if(str[i+1]==32||str[i+1]==0)
		{if(j!=0)
		if(flag==0)
			{printf("%d",j);
			j=0;
		flag++;}
		else {printf(",%d",j);
		j=0;}
		}
		else j++;

}