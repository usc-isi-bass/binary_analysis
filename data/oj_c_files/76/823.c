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
	int n,start[50000],end[50000],st=10000,e=0,i,point=0;
	double j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&start[i],&end[i]);
		if(start[i]<st){st=start[i];}
		if(end[i]>e){e=end[i];}}
	for(j=st+0.5;j<e;j++){
		for(i=0;i<n;i++){
			if(j>start[i]&&j<end[i]){
				point++;
				break;}}}
	if(point==e-st){printf("%d %d",st,e);}
	else{printf("no");}
	return 0;
}