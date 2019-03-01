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
	int a[11000],k,i,j,n,b,l=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		//scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=a[i]+a[j];
			if(b==k){l+=1;}
		}
	}
	if(l!=0){printf("yes");}
	else{printf("no");}
	
	return 0;
}