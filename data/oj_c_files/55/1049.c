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
	long int i,m,k,s,c[32],a,b;char n[32];
	scanf("%d%s%d",&a,n,&b);
	m=0;s=1;k=0;i=31;
	while(i>=0)
	{
		if(n[i]>=48)
		{
			if(n[i]>=97)n[i]=n[i]-87;
			else if(n[i]>=65)n[i]=n[i]-55;
			else n[i]=n[i]-48;
			m=n[i]*s;
			s=s*a;
			k=k+m;
		}
		i--;
	}
	i=0;
	do
	{
		c[i]=k%b;
		k=k/b;
		i++;
	}while(k!=0);
	for(--i;i>=0;i--)
	{
		if(c[i]>9)printf("%c",c[i]+55);
		else printf("%d",c[i]);
	}
	printf("\n");
}
