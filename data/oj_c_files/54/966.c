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
	int i,n,k,x;
	int judge(int,int,int);
	scanf("%d %d",&n,&k);
	for(i=1;i<=1000000000;i++){
		x=judge(n,k,i);
		if(x==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}

int judge(int n, int k, int i)
{
	int yushu,j;
	for(j=1;j<=n;j++){
		yushu=i%n;
		i=i-yushu-i/n;
		if(yushu!=k||i==0){
			break;
		}
	}
	if(j==n+1){
		return 1;
	}else{
		return 0;
	}
}
