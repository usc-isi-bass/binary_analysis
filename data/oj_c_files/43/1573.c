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
	int a[20001],i,n,haha,j;
	for(i=1;i<=10000;i++) a[i]=1;
	a[0]=0;
	a[1]=0;
	i=2;
	
	do
	{
		j=2;
		if(a[i]==1)
		do
		{
			n=i*j;
			a[n]=0;
			j++;
		}while(n<=10000);
		
		i++;
	}while(i<=10000);
	
	a[2]=0;
	scanf("%d",&haha);
	i=3;
	do
	{
		j=haha-i;
		if((a[i]==1)&&(a[j]==1)) printf("%d %d\n",i,j);
		i++;
	}while(i<=(haha/2));
	return 0;
}