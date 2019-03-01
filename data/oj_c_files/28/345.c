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
    char str[10000];
	int num[300],i,*p,x=0;
	gets(str);
	p=num;
	for(i=0;i<300;i++)
		num[i]=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			*p=*p+1;
			x=0;
		}
	    else if(x==0)
		{
			p++;
			x=1;
		}
	}
	printf("%d",num[0]);
	for(i=1;num[i]!=0;i++)
		printf(",%d",num[i]);
}