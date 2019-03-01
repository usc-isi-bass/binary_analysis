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

int main(){
	int n,i,a,b,k=0;
	char s[8];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0)
		{
			if(b==1)
			{
				k++;
			}
			if(b==2)
			{
				k--;
			}
		}
		if(a==1)
		{
			if(b==0)
			{
				k--;
			}
			if(b==2)
			{
				k++;
			}
		}
		if(a==2)
		{
			if(b==0)
			{
				k++;
			}
			if(b==1)
			{
				k--;
			}
		}
	}
	if(k>0)
	{
		printf("A");
	}
	else if(k==0)
	{
		printf("Tie");
	}
	else if(k<0)
	{
		printf("B");
	}
	return 0;
}