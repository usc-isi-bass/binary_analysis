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
	char w;
	int a[300],x,t,n,k,m;
	for(x=0;w!='\n';x++)
	{
		scanf("%d%c",&a[x],&w);
	}
	for(k=x-1;k>0;k--)
	{
    for(n=0;n<k;n++)
	{
	   if(a[n]>a[n+1])
	   {
		 t=a[n];
		 a[n]=a[n+1];
		 a[n+1]=t;
	   }
	}
	}
	if(x==1||a[0]==a[x-1])printf("No");
	else 
	{
		for(m=x-1;a[m]==a[m-1];m=m-1)
		{}
	printf("%d",a[m-1]);
	
	}



	return 0;
}