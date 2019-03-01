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

int sushu(int x)
{
	int i,n=0;
	double y;
	y=sqrt(x*1.0);
	for(i=1;i<=y;i++)
	{
		if(x%i==0)
		{
			n++;
		}
	}
	if(n==1)
	return 1;
	else return 0;

}
int main()
{
    long int n=6,m;
	long int i;
	scanf("%ld",&m);		
	while(n<m+1)
	{
        for(i=3;;i++)
		{	
			if(sushu(i)==1&&sushu(n-i)==1)
			{
					printf("%ld=%ld+%ld\n",n,i,n-i);
					break;
			}
		}
		n+=2;
	}
	return 0;
}
