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

main()
{
	for(;;)
	{
		int n,m,a[300]={0};
		scanf("%d %d",&n,&m);
		if(n==0) 
		break;
		int i,s,t=0;
		s=n;
		while(s!=1)
		for(i=0;i<n;i++)
		{
			if(a[i]==0) 
		    t++;
			if(t==m)
		   	{
				a[i]=1;
				s--;
				t=0;
			}
			if(s==1)     break;
		}	
		for(i=0;i<n;i++)
		if(a[i]!=1)  
		break;
		printf("%d\n",i+1);
	}
	
} 