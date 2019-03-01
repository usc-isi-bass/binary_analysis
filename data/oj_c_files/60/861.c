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

int main()
{
int n,i,j,a,b,m,p,l;
l=0;
scanf("%d",&n);
for(i=3;i<=n;i++)
{
	for(j=i-1;j>=2;j--)
	{
		a=i%j;
		if(a==0){
			break;
		}
	}
	if(j==1){
		b=i-2;
		if(b<=n){
	for(m=b-1;m>=2;m--){
		p=b%m;
			if(p==0){
			break;
		}
	}
	if(m==1){
			printf("%d %d\n",b,i);
			l=1;
	}
	}
	
}
}
	if(l==0){
		printf("empty");
	}

return 0;
}
	

	