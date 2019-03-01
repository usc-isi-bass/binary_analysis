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
	long a,b[8]={0},c=0,d=0,i,s=0;
	scanf("%d",&a);
	for(i=3;i<=7;i=i+2)
	{
		if(a%i==0)
		{
			b[i]=i;
			c++;
		}
	}
	for(i=3;i<=7;i=i+2)
		s=s+b[i];
	if(s==0)
	printf("n");
        else
	for(i=3;i<=7;i=i+2)
	{
if(b[i]!=0)
		{printf("%ld",b[i]);
		d++;
		if(d<c)
			printf(" ");}
	}
}