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

int ysf(int n,int m);
int main(){

	int nz[500],mz[500];
	int s=0;
	for (int i=0;i<500;i++){
		scanf("%d %d",&nz[i],&mz[i]);
		s++;
		if (nz[i]==0&&mz[i]==0){break;}}

	for (int i=0;i<s;i++){
		while (nz[i]!=0&&mz[i]!=0){
			printf("%d\n",ysf(nz[i],mz[i]));
			break;	
		}
	}
	return 0;
}

int ysf(int n,int m){
        if (n==1){
		    return 1;
		}else{
			return(ysf(n-1,m)+m-1)%n+1;
		}}
