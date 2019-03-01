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

// ?????.cpp : Defines the entry point for the console application.
//

void reverse(int x,int k);
int main(int argc, char* argv[])
{
	int i,n;
	for(i=0;i<6;i++){
		scanf("%d",&n);
		if(n<0)printf("-");
		reverse(n,0);
	}
	return 0;
}


void reverse(int x,int k){
	if(x<0)x=-x;
	if(x%10!=0)k++;
	if(x/10==0){
		printf("%d\n",x);
	}else{
		if(k!=0)printf("%d",x%10);
		reverse(x/10,k);
	}
	
}

