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
	int n,k,m,i=1;
	scanf("%d %d",&n,&k);
	int pg[100];
	pg[n]=n+k;
	while(i!=0){
		for(i=n-1;i>=0;i--){
			if(pg[i+1]%(n-1)!=0)
			break;
		    pg[i]=pg[i+1]/(n-1)*n+k;
		}
		//if(i==0) break;
		pg[n]+=n;
	} 
	printf("%d\n",pg[1]);
	return 0; 
} 