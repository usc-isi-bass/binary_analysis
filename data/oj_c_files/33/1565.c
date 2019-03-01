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
	int n,i,j;
	char zf[300],pd[300];
	scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s",zf);
	int l=strlen(zf);
	for(j=0;j<l;j++){
		if(zf[j]=='A'){
			pd[j]='T';
			continue;}
		if(zf[j]=='T'){
		pd[j]='A';
continue;}
		if(zf[j]=='C'){
			pd[j]='G';
			continue;}
		if(zf[j]=='G'){
			pd[j]='C';
			continue;}}
	pd[strlen(zf)]='\0';
		printf("%s\n",pd);}

return 0;
}



