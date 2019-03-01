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
	char y[256],z[256],h[256],sc[256];
    gets(y);
	gets(z);
	gets(h);
	int k=0,count=0,o;
	int a=strlen(y);
	int b=strlen(z);
	int c=strlen(h);
	for(int i=0;i<a;i++){
		if(y[i]==z[k]){
			k++;
			count++;
			if(count==b){
			   break;
			}
		}else if(count!=b){
			if(count>0){
				i--;
			}
			count=0;
			k=0;
		}
		o=i;
	}
	int e=o-k+2;
	int f=0;
	for(int m=0;m<a;m++){
		if((m>=e)&&(m<e+c)){
			 sc[m]=h[f];
			 f++;
		}else{
			 sc[m]=y[m];
		}
	}
	for(int l=0;l<a;l++){
   	     printf("%c",sc[l]);
	}
	return 0;
}