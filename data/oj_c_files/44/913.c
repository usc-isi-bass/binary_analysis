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
	int a[6],b[5],c[6],i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
	b[0]=a[i]/10000;
	b[1]=a[i]/1000-10*b[0];
	b[2]=a[i]/100-10*b[1]-100*b[0];
	b[4]=a[i]%10;
	b[3]=(a[i]%100-b[4])/10;
	if(a[i]/10000!=0)
	c[i]=b[0]+b[1]*10+b[2]*100+b[3]*1000+b[4]*10000;
	else if(a[i]/1000!=0)
		c[i]=b[1]+b[2]*10+b[3]*100+b[4]*1000;
	else if(a[i]/100!=0)
		c[i]=b[2]+b[3]*10+b[4]*100;
	else if(a[i]/10!=0)
		c[i]=b[3]+b[4]*10;
	else c[i]=b[4];
	}
	for(i=0;i<6;i++)
		printf("%d\n",c[i]);
}
