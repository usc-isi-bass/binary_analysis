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
	char s[50];
	char w[50];
	char sw[50];
	int schangdu;
	int wchangdu;
	int i,j;
	int m;
	int tag=0;
	scanf ("%s",s);
	scanf ("%s",w);
	schangdu=strlen(s);
	wchangdu=strlen(w);
	for(i=0;i<wchangdu;i++){
		for(j=i;j<i+schangdu;j++){
			sw[j-i]=w[j];
		}
		sw[schangdu]=0;
			m=strcmp(s,sw);
			if(m==0){
				printf("%d",i);
				tag=1;
				break;
			}
			if(tag==1){
				break;
			}
	    if(tag==1){
			break;
		}
	}
	return 0;
}