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
	int n,i,len,j=0,k=0,l=0,c[505]={0},sum=0,max=2;
	char zichuan[505],a[505][505];
	scanf("%d\n",&n);
    gets(zichuan);
	len=strlen(zichuan);
	for(i=0;i<len;i++)
	{
		for(j=i;j<n+i;j++)
		{
	       a[k][l]=zichuan[j];
		   l++;
		}
		a[k][n]='\0';
		k++;l=0;
	}
    for(i=0;i<k;i++)
	{
         for(j=i;j<k;j++)
		 {
			
			if(strcmp(a[i],a[j])==0)
			{
				c[i]=c[i]+1;
			}
			 
		 }
		 
	}
     for(i=0;i<k;i++)
	 {
		
		 if(c[i]==1)
		 {
			 sum++;
		 }
	 }
	if(sum==k)
	{
		printf("NO");
	}
	else
	{
        for(i=0;i<k;i++)
		{
			if(max<=c[i])
			{
				max=c[i];
			}
			else
			{
				continue;
			}
		}
		printf("%d\n",max);
		for(i=0;i<k;i++)
		{ 
			    if(c[i]==max)
				{
					for(j=0;j<n;j++)
				{
					printf("%c",a[i][j]);
				}
					printf("\n");
				}
		
		}
	}

	return 0;
}