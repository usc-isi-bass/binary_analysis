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
	int n,i,j,k,a=0;
	int sz[300],sa[300];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
for(i=0;i<n;i++){
	for(j=i-1;j>=0;j--){
		if(sz[i]==sz[j]){
			sz[i]=0;}}}
printf("%d",sz[0]);
for(i=1;i<n;i++){
	if(sz[i]!=0){
		printf(",%d",sz[i]);}}

	return 0;
}
