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
	int n,i=0,a,b,c,j=0,k=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d%d",&a,&b);
		c=a-b;
		if(c==-1||c==2){
			j++;
		}else if(c==1||c==-2){
			k++;
		}
		i++;
	}
	if(j>k){
		printf("A");
	}else if(j<k){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}