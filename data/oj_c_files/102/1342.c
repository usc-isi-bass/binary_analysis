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

main()
{
	int i,j,k,n,m,x,t=0;
	struct stu
	{
    	float h;
		char s[SEX+1];
	}a[MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++) 
    scanf("%s%f",a[i].s,&a[i].h);
	 
	for(i=0;i<n;i++)
	{
		k=i;
		if(strcmp(a[i].s,"male" )==0)
		{   t++; 
			for(j=i+1;j<n;j++)
			{
				if( strcmp(a[j].s,"male" )==0&&a[j].h<a[k].h){
				k=j;}
				else continue;
			}
		 if(t==1)printf("%.2f",a[k].h);
	 	 else printf(" %.2f",a[k].h);
				
		 
			  
		 	a[k]=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		k=i;
		if(strcmp(a[i].s,"female" )==0 )
		{
			for(j=i+1;j<n;j++)
			{
				if(strcmp(a[j].s,"female" )==0 &&a[j].h>a[k].h)k=j;
			}
		 	    
				 printf(" %.2f",a[k].h);
				
			 
		 	a[k]=a[i];
		}
		else continue;
	}
}