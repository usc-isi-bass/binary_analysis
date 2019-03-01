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
	int n,t,x,i;
	int age[100];
	char c[10],num[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",num[i],&age[i]);

	for(i=0;i<n;i++)
	    if(age[i]>=60)
	
			for(x=i;x>0;x--)
		           if(age[x]>age[x-1])
				   {   t=age[x];age[x]=age[x-1];age[x-1]=t;
			          strcpy(c,num[x]);strcpy(num[x],num[x-1]);strcpy(num[x-1],c);
				   }
			
			
		
	

	for(i=0;i<n;i++)
		printf("%s\n",num[i]);
}