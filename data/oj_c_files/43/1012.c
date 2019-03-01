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
	int m,n,k,j,i,l,p;
	scanf("%d",&m);
	for(n=3;n<=m/2;n++){
		p=sqrt(n);
		for(i=2;i<=p;i++){
			if(n%i==0)break;
		}
		if(i>p){
			k=m-n;
			l=sqrt(k);
			for(j=2;j<=l;j++){
					if(k%j==0)break;
			}
			if(j>l)
				printf("%d %d\n",n,k);
					}
			
		
	}
	return 0;
}