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
int m,e,n,i,j,k,s[1000];
int t=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
scanf("%d",&(s[i]));
}
for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		e = s[i+1];
		s[i+1] = s[i];
		s[i] = e;
}}
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if((s[i]+s[j])==m){
			t=1;
		}
}}
if(t==1){
printf("yes");
}else{
printf("no");
}






return 0;
}