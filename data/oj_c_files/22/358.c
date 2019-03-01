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

/*?????*/
void main()
{
	int a[301],n=0,i,j,b=0;
	char c;
	do
	{
		scanf("%d",&a[n]);
		n++;
	}
	while((c=getchar())!='\n');
    for(j=1;j<n;j++) 
	{
		if(a[j]!=a[j-1]) 
		{
			b++;break;
		}
		else b=0;
	}
	if(n==1||b==0) printf("No\n");
	else
	{
	    int m1=0,m2=1;
	    for(i=b-1;i<n;i++)
		{
		   if(a[i]>m1&&a[i]<m2) m1=a[i];
		   else if(a[i]>m2) 
		   {
			   m1=m2;
			   m2=a[i];
		   }
		   else continue;
		}
		printf("%d\n",m1);
	}
	
}
