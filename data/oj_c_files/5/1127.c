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
	int sum=0,lena,lenb,i,c;
	char yi[501],er[501];
	double rate,a;
	scanf("%lf",&a);
	scanf("%s%s",yi,er);
	lena=strlen(yi);
	lenb=strlen(er);
	if(lenb!=lena){
		printf("error");
	}else{
		for(i=0;i<lena;i++){
			if(yi[i]==0){
				break;
			}else if(yi[i]>='A'&&yi[i]<='Z'&&er[i]>='A'&&er[i<='Z']){
				if(yi[i]==er[i]){
					sum++;
				}else{
					continue;
				}
			}else{
				c=1;
				printf("error");
				break;
			}
		}
		rate=sum*1.0/lena;
		if(c!=1){
		if(rate>a){
			printf("yes");
		}else if(rate<=a){
			printf("no");
		}
		}
	}
	return 0;
}