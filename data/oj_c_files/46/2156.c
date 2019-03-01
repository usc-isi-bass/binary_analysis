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
	int a[100][100],m,n,i,j,s=0;
	int (*p)[100];
	p=a;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);}
	for(i=0;(i<(m+1)/2)&&(i<(n+1)/2);i++)
	{
		for(j=i;j<n-i;j++)
		{   	
			if(s<n*m)
			printf("%d",*(*(p+i)+j));  
			if(s<n*m-1)
			printf("\n");
			s++;
		}
		for(j=i+1;j<m-i;j++)
		{
			if(s<n*m)
			printf("%d",*(*(p+j)+n-1-i));
		    if(s<n*m-1)
			printf("\n");
			s++;
		}
		for(j=n-i-2;j>=i;j--)
		{
			if(s<n*m)
			printf("%d",*(*(p+m-1-i)+j));		    
			if(s<n*m-1)
			printf("\n");
			s++;		
		}
		for(j=m-i-2;j>i;j--)
		{
			if(s<n*m)
			printf("%d",*(*(p+j)+i));
			if(s<n*m-1)
			printf("\n");
			s++;
		}
	}
     return 0;
}
