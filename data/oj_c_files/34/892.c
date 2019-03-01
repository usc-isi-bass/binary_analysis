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
	int n,a,b,c=0;
	scanf("%d",&n);
	a=n;
	if(n==1){
		printf("End");
	}else{
			for(;1<a;){
				if(a==1){break;}else{
				if(a%2==0){
					b=a;
					a=a/2;
					printf("%d/2=%d",b,a);
					printf("\n");}else{
				if(a%2==1){
					b=a;
					a=a*3+1;
					printf("%d*3+1=%d",b,a);
					printf("\n");}
				
			}
		
					}}printf("End");}

	return 0;
}