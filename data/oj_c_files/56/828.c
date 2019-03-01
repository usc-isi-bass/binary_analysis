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
{int m,n,p=0;
scanf("%d",&n);
int i;
while(n!=0)
{printf("%d",n%10);
n=n/10;}
/*for(i=m;i<=n;i++)
{	if(i%7==0) 
	{if(p==1)
	{putchar(',');p--;}
	printf("%d",i);
	p++;}
}*/
}