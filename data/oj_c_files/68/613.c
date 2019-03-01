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

int zhisu(int x)
{
	int i,a;
	a=0;
	if((x==2)||(x==3)||(x==5)||(x==7))a=1;
	for(i=3;i<=sqrt(x);i+=2)
	{	
		if(x%2==0){a=0;break;}
		else if(x%i==0){a=0;break;}
		else a=1;
	}
	return a;
}
int main()
{
	int number,A,B,i,j;
	scanf("%d",&number);
	for(j=6;j<=number;j+=2)
	{
	for(i=2;i<=j/2;i++)
	{
		A=zhisu(i);
		B=zhisu(j-i);
		if(A==1&&B==1)
		{
			printf("%d=%d+%d\n",j,i,j-i);
			break;
		}
	}
	}
	return 0;
}

