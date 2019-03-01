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
	char dc[3000];
	gets(dc);
	int len;
	len=strlen(dc);
	int i,sz[300]={0},j=0,k=1;
	for(i=0;i<len;i++){
		if(dc[i]!=32){
			sz[j]++;
		}
		if(dc[i]==32){
			j++;
		    do{
			    if(dc[i+1]==32){
				    i++;
				}
			} 
		    while(dc[i+1]==32);
		}
	}
	for(i=0;i<len;i++){
		if(dc[i]==' '){
			k++;
		    do{
			    if(dc[i+1]==32){
				    i++;
				}
			}
		    while(dc[i+1]==32);
		}
	}
	for(i=0;i<k;i++){
		if(i!=k-1){
		    printf("%d,",sz[i]);
		}
		else{
			printf("%d",sz[i]);
		}
	}
	return 0;
}





    


		


