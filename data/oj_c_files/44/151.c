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



int reverse(int num); 
int branch(int e);
int main()
{
	int A[6],i;
	for (i=0;i<6;i++)
	{
		scanf("%d",&A[i]);
	}
	for (i=0;i<6;i++)
	{
		int v=reverse(A[i]);
		printf("%d\n",v);
	}
	return 0;
}
int reverse(int num){
	int c;
	if (num == 0)
	{
		c=num;
	}
	if (num <0)
	{
		int d=abs(num);
		c= -branch(d);
	}
	if (num >0)
	{
		 c= branch(num);
	}
	return c;
}
int branch(int e){
	int reversenum=0,standard=e;
	for(;e>0;)
	{
		reversenum=10*reversenum+e%10;
		e=e/10;
	}
	return reversenum;
}
