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

void main()
{
	int i,x=0,y,z=0,p,enter,count;
	int a[300];
	scanf("%d",&i);
	
	while(z<=i-1)
	{
		z++;
		count=0;
		scanf("%d",&enter);
		
		for(y=0;y<x;y++)
		{
			if(enter==a[y])
			count++;
		}
		if(count!=0) continue;
		a[x]=enter;
		x++;
		
	}
		


	for(p=0;p<x-1;p++)
	{
		printf("%d,",a[p]);
    }
	printf("%d",a[x-1]);
	
	
	


}