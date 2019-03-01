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
	char a[100];
	int s,i,shuliang,n;
	char weizhi;
	gets(a);
	n=strlen(a);
	int zuihou=0;
    for (s=97;s<=122;s++){
         shuliang=0;
         weizhi=s;
		for(i=0;i<n;i++){
			if(a[i]==s){
				shuliang++;
			}
		}
		if(shuliang!=0){
		printf("%c=%d\n",weizhi,shuliang);
		zuihou++;
		}
	}
		
	if(zuihou==0){
		printf("No");
	}
	return 0;

	
}
