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
	char zfc[300],i;
	int dec=0,tag,cs[26]={0},m=0,j;
	scanf("%s",zfc);
	int n=strlen(zfc);
	for(i='A';i<='Z';i++){
		tag=0;
		for(j=0;j<n;j++){
			if(zfc[j]==i){
				cs[m]++;
				dec=1;
				tag=1;
			}
		}
		if(tag!=0){
			printf("%c=%d\n",i,cs[m]);
			m++;
		}
	}
	for(i='a';i<='z';i++){
		tag=0;
		for(j=0;j<n;j++){
			if(zfc[j]==i){
				cs[m]++;
				dec=1;
				tag=1;
			}
		}
		if(tag!=0){
			printf("%c=%d\n",i,cs[m]);
			m++;
		}
	}
	if(dec==0){
		printf("No");
	}
	return 0;
}

				