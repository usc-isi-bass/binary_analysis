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

int fbnq(int n){
	if(n == 0){
		return 0;
     } 
	
	if(n == 1){
		return 1;
	}

	return fbnq(n-1) + fbnq(n-2);
}
int main(int argc, char* argv[])
{
	int m,i,n,j;
	double sum=0,sz[10000];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			sz[j]=1.0*fbnq(j+3)/fbnq(j+2);
			sum+=sz[j];
		}
        printf("%.3lf\n",sum);
		sum=0;

	}
	return 0;
}

