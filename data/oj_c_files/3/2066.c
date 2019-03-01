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
   int n,i,j,k,m,a[1000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
		scanf("%d",&a[i]); 
	} 
	for(i=0;i<n;i++)
	{
		m=k-a[i];
		for(j=0;j<n;j++)
		{
			if(j==i)
			{continue;}
			if(a[j]==m){ 
			printf("yes");
			break;
			} 
		}
		 if(a[j]==m)
		 break; 
	}
	if(i==n&&j==n)
	printf("no"); 
	scanf("%d",&n); 
	return 0; 

} 