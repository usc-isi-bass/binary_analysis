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

int issushu(int n)
{
	int x;
    for(x=2;x<=sqrt(n);x=x+1)
	{
		if(n%x==0) break;
	}
		if(x>sqrt(n)) return 1;
		else return 0;
	
}
void main()
{
	int n;
	scanf("%d",&n);
	int i;
	int num;
	num=0;
	for(i=3;((i+2)<=n);i=i+2)
	{
		//printf("here");
		if(issushu(i)) 
		{
			if(issushu(i+2))
				//printf("here");
				printf("%d %d\n",i,i+2);
			num=num+1;
		}
	}
	if(num==0) printf("empty\n");
}

 
