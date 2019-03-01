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
	char str[100];
	int i,t,b[100],k=0,n,m=0;
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
		if(str[i]==' ') m=m+1;
		for(i=0;i<n;i++)
		
			if (str[i]==' ') 
			
				{ 
					t=i; 
					b[k]=t;
				    k++;
					
				}
			if(t>=n-1)
			{
				
                              for(i=0;i<n;i++)
		            printf("%c",str[i]);
			}
			else
			{
			for(i=b[m-1]+1;i<n;i++)
		printf("%c",str[i]);
		printf(" ");
		for(k=m-1;k>0;k--)
		{
			for(i=b[k-1]+1;i<=b[k];i++)
				printf("%c",str[i]); 
		}
			for(i=0;i<b[0];i++)
			printf("%c",str[i]);
			}
}
	      