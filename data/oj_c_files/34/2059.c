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
	int n,m,i,j,k,l;
	scanf("%d",&n);
	for(i=0;n!=1;i++)
	{
		if(n%2==0)
		{
			m=n/2;
			printf("%d/2=%d\n",n,m);
			n/=2;
		}
		else if(n%2!=0)
		{
			m=n*3+1;
			printf("%d*3+1=%d\n",n,m);
			n=n*3+1;
		}
	}
	printf("End");
	return 0;
}
