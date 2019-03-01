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

int jiaogu(int n)
{	
	if(n%2==1)
	{
		n=n*3+1;	
	}
	else
	{
		n=n/2;		
	}
	return(n);
}
void main()
{
	int jiaogu(int n);
	int n;
	scanf("%d",&n);
	if(n==1) printf("End");
	else{
	while(jiaogu(n)!=1)
	{	
		int k;
		k=n;
		if(n%2==1) printf("%d*3+1=%d\n",k,jiaogu(n));
		else printf("%d/2=%d\n",k,jiaogu(n));
		n=jiaogu(n);
	}
	printf("2/2=1\n");
	printf("End");}
}