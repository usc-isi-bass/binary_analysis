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
	int n;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int pd=0;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<12;i++){
		for(j=1;j<=a[i];j++){
			if((i!=0)||(j!=1)){
				n++;
				if (n==8){
					n=1;
				}
				if((n==5)&&(j==13)){
					if(pd==0){
						printf("%d",i+1);
						pd=1;
					}
					else {
						printf("\n%d",i+1);
					}
				}
			}
		}
	}


	return 0;
}