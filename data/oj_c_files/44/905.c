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

void reverse(int n)
{
	int a,b,i,j;
	a=fabs(n);
	b=log(a)/log(10);
	if(n<0)printf("-");
	if(a%(int)pow(10,b)==0)printf("%d",(int)(a/pow(10,b))/10);
	else{
	for(i=0;i<=b;i++)
	{
		if((int)(a/pow(10,i))%10!=0)
		{
		for(j=i;j<=b;j++)printf("%d",(int)(a/pow(10,j))%10);
		break;}
	}
	}
	printf("\n");
}
void main()
{
	int a[6],i;
	for(i=0;i<6;i++)	
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)reverse(a[i]);
}
