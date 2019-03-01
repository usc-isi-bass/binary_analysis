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


int jisuan(int n,int k){
	int num=1,x=1,i;

	while(1){
		for(i=0;;i++){
			if(x%n==k&&x/n>0){
				x=x/n*(n-1);
			}
			else
				break;
			if(i==n-1){
				return num-1;
			}
		}
		x=num++;
	}
}

int main(int argc, char* argv[])
{
	int x,y,result;
	scanf("%d %d",&x,&y);
	result=jisuan(x,y);
	printf("%d\n",result);

	return 0;
}