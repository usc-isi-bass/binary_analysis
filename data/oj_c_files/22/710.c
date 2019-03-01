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
	int a[300];
	char c;
	int i,n,max,ma;
	scanf("%d",&a[0]);
	scanf("%c",&c);
	i=1;
	while(c==',')
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		i++;
	}
	n=i;
	i=1;
	max=a[0];
	if(n==1) printf("No");
	else
	{
	
		while(i<n)
	    {
		
			if(max<a[i]) max=a[i];
		    i++;
	    }
	    if(max==a[0]) ma=0;
		else ma=a[0];
	    i=0;
	    while(i<n)
	    {
		
			if((ma<a[i])&&(a[i]!=max)) ma=a[i];
		    i++;
	    }
	    if((max==ma)||(ma==0)) printf("No");
	    else printf("%d",ma);
	}

	return 0;
}