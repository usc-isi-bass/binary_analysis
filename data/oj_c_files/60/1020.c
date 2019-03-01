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



int main(int argc, char* argv[])
{
	int n,a[A],i,j,k=0;
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0){
			break;
			}
		}
		if(j==i)
		{a[k]=i;
		k++;}
	}
	if(n<5)
		printf("empty\n");
	else{
	for(i=0;i<k-1;i++)
	{
		if(a[i]+2==a[i+1])
			printf("%d %d\n",a[i],a[i+1]);
	}
	}


	return 0;
}
