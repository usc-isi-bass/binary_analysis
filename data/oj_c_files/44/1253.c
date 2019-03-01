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

int reverse(int num)
{
	int zheng=abs(num);
	int sz[10],i,wei=0;
	for(i=0;i<10;i++){
		sz[i]=zheng%10;
		zheng=zheng/10;
		wei++;
		if(zheng==0)
			break;
	}
	int Reverse=0;
	for(i=0;i<wei;i++){
		Reverse=Reverse*10+sz[i];
	}
	return Reverse;
}
int main()
{
	int n,i;
	for(i=0;i<6;i++){
		scanf("%d",&n);
		if(n>0){
			printf("%d\n",reverse(n));
		}else{
			printf("%d\n",-reverse(n));
		}
		}
	return 0;
}
