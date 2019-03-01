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
	int n,i,count,x,sum;
	sum=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++){
		for(x=2,count=0;x<i;x++){
			if(i%x!=0){count++;}
	}
		if(count==i-2){
	for(x=2,count=0;x<(i+2);x++){
			if((i+2)%x!=0){count++;}
	}
	if(count==i){
	printf("%d %d\n",i,i+2);
	sum++;}}}
	if(sum==0){
	printf("empty");}
	return 0;
}
