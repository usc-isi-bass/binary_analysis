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
	int n,i,lenth,c[500]={0},max=0,j,t;
	char a[500],b[6],d[6];
	scanf("%d",&n);
	getchar();
	gets(a);
	lenth=strlen(a);   
	b[n]='\0';
	d[n]='\0';
	for(i=0;i<lenth-n;i++)
	{
		for(t=i;t<n+i;t++)
			b[t-i]=a[t];
		c[i]++;
		for(j=i+1;j<lenth+1-n;j++)
		{
			for(t=j;t<n+j;t++)
			   d[t-j]=a[t];            
			if(strcmp(d,b)==0)
				c[i]++;
			
		}
		                                            // printf(" %s %d \n",b,c[i]);
	}
	for(i=0;i<lenth-n;i++)
	{
		if(c[i]>max) max=c[i];
		                                   //printf(" %d \n",c[i]);
	}
  if(max>1)
  {                                        // printf("  %d  \n",max);
	printf("%d\n",max);
	  for(i=0;i<lenth-n;i++)
	{
		if(c[i]==max) 
		{
			for(j=i;j<n+i;j++)
				printf("%c",a[j]);
			printf("\n");
		}
	}
  }
  else
	  printf("NO");
}