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
	int i;
	int j=0;
	for(i=2;i<=x/2;i++)
		if(x%i==0)
			j=j+1;
		if(j==0)
			return 1;
		else 
			return 0;
}
void main()
{
	int n;
	int i;
	int j=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i=i+2)
		if(sushu(i)==1&&sushu(i+2)==1)
		{
			j=j+1;
			printf("%d %d\n",i,i+2);
		}
		if(j==0)
			printf("empty");
}