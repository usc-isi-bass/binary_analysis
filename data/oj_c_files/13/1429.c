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
	int i,n;
	scanf("%d",&n);
	int *N
		=(int*)malloc(sizeof(int)*n);
	for(int k=0;k<n;k++)
	{
		scanf("%d",&(N[k]));
	}
	for(i=1;i<n;i++)
	{
		for(int r=0;r<i;r++)
		{
		if(N[i]==N[r])
		{
			for(int j=i;j<n;j++)
			{
				N[j]=N[j+1];
			}
			n--;
			i--;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			printf("%d",N[i]);
		else
			printf("%d ",N[i]);
	}
	return 0;
}