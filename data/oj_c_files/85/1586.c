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
	int n,i,k,c;
	char x[10],zfc[20];
	gets(x);
	n=atoi(x);
	for(i=0;i<n;i++){
		gets(zfc);
		c=0;
		for(k=0;zfc[k]!='\0';k++){
			if(k==0){
				if((zfc[k]>='0')&&(zfc[k]<='9')){
					c++;
				}else if((zfc[k]>='\0'&&zfc[k]<'0')||(zfc[k]>'9'&&zfc[k]<'A')||(zfc[k]>'Z'&&zfc[k]<'_')||(zfc[k]>'_'&&zfc[k]<'a')||(zfc[k]>'z')){
					c++;
				}
			}else{
				if((zfc[k]>='\0'&&zfc[k]<'0')||(zfc[k]>'9'&&zfc[k]<'A')||(zfc[k]>'Z'&&zfc[k]<'_')||(zfc[k]>'_'&&zfc[k]<'a')||(zfc[k]>'z')){
					c++;
				}
			}
		}
		if(c>0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}