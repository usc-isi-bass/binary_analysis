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
	char a[2][30]={'\0'};
	char *p,*q;
	p=&a[0][0],q=&a[1][0];
	scanf("%s%s",q,p);
	int n=strlen(q),flag=0;
	for(;*p!='\0';p++)
	{
		while(*p!=*q&&*p!='\0')p+=1;
		flag=1;
		while(*(q+1)!='\0')
		{
			p+=1;q+=1;
			if(*p!=*q)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d",p-&a[0][0]-n+1);
			break;
		}
	}
}