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
	char zfc[101],sor[101],rep[101];
	int dec,i,j;
	gets(zfc);
	scanf("%s",sor);
	scanf("%s",rep);
	int n=strlen(zfc);
	int k=strlen(sor);
   
    
	for(i=0;i<n;i++){
		dec=0;
		for(j=i;j<=i+k-1;j++){
			if(zfc[j]!=sor[j-i]){
				dec=1;
				break;
			}
		}
		
		if(((i==0)&&(dec==0))||((dec==0)&&(zfc[i-1]==' '||zfc[i-1]==','||zfc[i-1]=='.'))){
			printf("%s",rep);
			i=i+k-1;
		}
		else{
			printf("%c",zfc[i]);
			continue;
		}
	}
	return 0;
}
