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

void main(){
	int n,i,j,judge;
	char zfc[81],*pzfc;
	pzfc=zfc;
	scanf("%d",&n);
	gets(zfc);     //??????????????????????
	for(i=0;i<n;i++){
		gets(zfc);
		j=0;
		judge=0;
		while(*(pzfc+j)!='\0'){
			if(j==0){
				if(*(pzfc+j)!='_'&&(*(pzfc+j)<'A'|*(pzfc+j)>'z')){
					judge=1;
					break;
				}
			}
			else{
				if((*(pzfc+j)<'A'||*(pzfc+j)>'z')&&(*(pzfc+j)<'0'||*(pzfc+j)>'9')){
					judge=1;
					break;
				}
			}
			j++;
		}
		if(judge)
			printf("0\n");
		else
			printf("1\n");
	}
}