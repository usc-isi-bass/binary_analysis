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
	char ch[2000]={'\0'};
	int flag=0,n=0,i,j=0;
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=' ')
		{
			if(flag==0)  flag=1;
			n++;
		}
		else
		{
			if(flag==1) 
			{
				if(j!=0) printf(",");
				printf("%d",n);
				n=0;
				j++;
				flag=0;
			}
		}
	}
	if(n!=0)
	{
		if(j!=0) printf(",");
		printf("%d",n);
	}
	printf("\n");
}