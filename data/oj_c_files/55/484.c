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
	int a,b,m=0,i,c[100],k=1,e=0,d=0;
	long sum=0;
	char n[100];
	scanf("%d%s%d",&a,n,&b);
	m=strlen(n);
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]>='a')
			c[i]=(int)(n[i])-87;
		else if(n[i]>='A')
			c[i]=(int)(n[i])-55;
		else
			c[i]=(int)(n[i])-48;
	}
	for(i=m-1;i>=0;i--)
	{
		sum+=c[i]*k;
		k*=a;
	}
	for(i=0,k=1;sum>0;i++)
	{
		c[i]=sum%b;
		sum=(sum-c[i])/b;
		k*=b;
		e++;
	}
	for(i=e-1;i>=0;i--)
	{
		if(c[i]<10)
			n[i]=(char)(c[i]+48);
		else
			n[i]=(char)(c[i]+55);
		printf("%c",n[i]);
		d=1;
	}
	if(d==0)
		printf("0");
}


