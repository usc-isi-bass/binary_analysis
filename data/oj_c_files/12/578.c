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
	int a[16],i,j,k,s;
	for(;;)
	{	s=0;
		scanf("%d",&a[0]);
	    if(a[0]==-1) break; 
		for(i=1;i<=15;i++)
		{	scanf("%d",&a[i]);
		   if(a[i]==0)  break;
		}
		for(j=0;j<=i-1;j++)
		{   
			for(k=0;k<=i-1;k++)
			{	if(a[k]==2*a[j]) s=s+1; } 
		}
        printf("%d\n",s); 
	}
	return 0;
}
