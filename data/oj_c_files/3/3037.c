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
	int n,k,sz[1000],i,m,sc[500500],l;
	scanf("%d %d",&n,&k);
	l=0;
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	for(i=0;i<n;i++){
		for(m=1;m<n-i;m++){
			sc[l]=sz[i]+sz[m];
			l=l+1;};}
	for(i=0;i<l;i++){
		if(k==sc[i]){printf("yes");
		return 0;}}
	printf("no");
	return 0;
}