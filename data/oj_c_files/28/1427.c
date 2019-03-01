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
	char zfc[10000];
	int s,e,num,len,k=0;
	gets(zfc);
	len=strlen(zfc);
	for(s=0;s<len;s++){
		if((s==0)||((zfc[s-1]==' ')&&(zfc[s]!=' '))){
			for(e=s;e<len;e++){
				if(zfc[e+1]==' '||e==len-1){
					break;
				}
			}
			num=e-s+1;
			if(k==0){
				printf("%d",num);
				k++;
			}else{
				printf(",%d",num);
				k++;
			}
		}
	}
	return 0;
}
