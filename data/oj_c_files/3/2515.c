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
	int i,n,k,j,a[1000],tempx,tempy,temp=0;
	scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	
    for(i=0;i<n;i++)
	{   
		tempx=a[i];
		for(j=i+1;j<n;j++)
		{
			tempy=a[j];
			if(tempx+tempy==k)
			{
				temp++;
				
			}
		}
	}
   if(temp>=1)
   printf("yes");
   if(temp==0)
   printf("no");
   return 0;
}