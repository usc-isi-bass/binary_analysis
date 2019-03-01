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
	scanf("%d",&n);
	char zfc[1000][42];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	int len=0,k;
	for(i=0;i<n;i++){    
        len=len+strlen(zfc[i])+1;
	  if(i<n-1){
		if(len<=80){
            k=len+strlen(zfc[i+1])+1;
			if(k>81){
				 printf("%s",zfc[i]);
			}
			if(k<=81){
				 printf("%s ",zfc[i]);
			}
		}
		if(len==81){
			printf("%s\n",zfc[i]);
			len=0;
		}
		if(len>81){
			printf("\n%s ",zfc[i]);
			len=strlen(zfc[i])+1;
		}
	  }
	  if(i==n-1){
		  printf("%s",zfc[n-1]);
	  }

	}
	return 0;
}
