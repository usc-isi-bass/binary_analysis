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
	int i,j,k=0,n,nt,total,flag;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		flag = 0;
		for(j=0;j<=n;j++){
			if(j<n){
				scanf("%d",&nt);
				if((nt+3*j)>=57&&(nt+3*j)<=60){
					total = nt;
					flag = 1;
				}
				if((nt+3*(j+1))>60){
					if(!flag){
						total = 60-j*3;
						flag = 1;
					}
				}
			}
			else{
				if(!flag){
					total = 60-j*3;
				}
			}
		}
		printf("%d\n",total);
	}
}