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
	char n[100];
	int b[100],a[100],i,sa,c,k=0;
    scanf("%s",n);
    sa=strlen(n);
	for(i=0;i<sa;i++)
	{
		a[i]=n[i]-'0';
	}
	c=a[0];
	for (i=0;i<sa-1;i++)
	{
		b[i]=(10*c+a[i+1])/13;
		c=(10*c+a[i+1])%13;
	}
    if (sa==1)
	{
		printf("0\n%d",a[0]);
		k=1;
	}
	if ((sa==2)&&(a[0]*10+a[1]<13))
	{
		printf("0\n%d",10*a[0]+a[1]);
		k=1;
	}
	if (k==0)
	{
	if(b[0]==0) 
	{
		for(i=1;i<sa-1;i++)
		{
			printf("%d",b[i]);
		}
		printf("\n%d",c);
	}
	else 
	{
		for (i=0;i<sa-1;i++)
		{
			printf("%d",b[i]);
		}
		printf("\n%d",c);
	}}
	return 0;
}
