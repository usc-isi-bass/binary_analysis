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

int main (){
	char sz[266];
	int i,k,len,n,m,j=0;
	char yuan[20],mb[20],kd[20];
	scanf("%s %s %s",sz,yuan,mb);
	m=strlen(sz);
	n=strlen(yuan);
	for(i=0;i<m;i++){
		if(sz[i]!=yuan[0]){
			printf("%c",sz[i]);
		}
		else{
			for(k=i;k<i+n;k++){
				kd[k-i]=sz[k];
			}
			    kd[n]='\0';
		
	    	if(strcmp(kd,yuan)==0){
				printf("%s",mb);
				for(k=i+n;k<m;k++){
	             	printf("%c",sz[k]);
				}
             break;
			
			}
			else{
				printf("%c",sz[i]);
			}
		
		}
		
	}

	

	return 0;
}
			