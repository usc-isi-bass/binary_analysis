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
	int t,u,v=0,i,j=0,max,a[300]={0};
	char s[1500]={0};
	scanf("%s",s);
	t=strlen(s);
	for(i=0;i<t;i++)
	{
		if(s[i]!=',')a[j]=a[j]*10+s[i]-48;
		else j++;		
	}
	t=j+1;						//printf("%d",j);		//printf("t%d  ",a[j]);			//	
	for(i=0;i<t-1;i++)
		for(j=i+1;j<t;j++)
			if(a[i]<a[j])
			{u=a[i];a[i]=a[j];a[j]=u;}				
			max=a[0];		//	printf("%d",t);					for(i=0;i<t;i++)			printf("a%d  ",a[i]);
			
				for(i=0;i<t;i++)
					if(a[i]!=a[0])		{printf("%d",a[i]);v++;break;}
					if(v==0)printf("No");
}