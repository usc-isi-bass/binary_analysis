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
	int put(int x,int y);
	int m[100],n[100],t,k[100],i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
		scanf("%d %d",&m[i],&n[i]);
	for(i=1;i<=t;i++)
	{
		k[i]=put(m[i],n[i]);
		printf("%d\n",k[i]);
	}
}
int put(int x,int y)
{
	
	if(y==1)
		return(1);
	else if(x>y)
		return(put(x-y,y)+put(x,y-1));
	else if(x<=y&&x!=1)
		return(put(x,x-1)+1);
	else
		return(1);

		

	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	