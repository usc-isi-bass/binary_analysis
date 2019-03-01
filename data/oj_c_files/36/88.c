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
	char a[100],b[100],c,d;
	char *p,*q;
	int al,bl,i,j;
	scanf("%s",&a);
	scanf("%s",&b);
	al=strlen(a);
	bl=strlen(b);
	p=a;
	q=b;
		for(j=0;j<al;j++)
		{
			for(i=0;i<al+1-j;i++)
			{
				if(*(p+i)<*(p+i+1))
				{
					c=*(p+i);
					*(p+i)=*(p+i+1);
					*(p+i+1)=c;
				}
			}
		}
		for(j=0;j<bl;j++)
		{
			for(i=0;i<bl+1-j;i++)
			{
				if(*(q+i)<*(q+i+1))
				{
					d=*(q+i);
					*(q+i)=*(q+i+1);
					*(q+i+1)=d;
				}
			}
		}
		if(strcmp(a,b)==0)
			printf("YES");
		else
			printf("NO");

	return 0;
}

