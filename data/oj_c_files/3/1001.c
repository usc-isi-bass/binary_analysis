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

int main()
{
	int n,sz[1000],k,p=0,h[1000][1000],i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	for(i=0;i<n;i++){
		for(j=i+1;j<n-i-1;j++){
			h[i][j]=sz[i]+sz[j];
			if(h[i][j]==k){
				p=1;}
		}
	}
	if(p==0){
		printf("no");}
	else if(p==1){
		printf("yes");}
	return 0;
}
