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

int main() {
	int k,m,n,i;
	int sz[ROW][COL];
	scanf("%d\n",&n);
	for(k=0;k<n;k++){
		for(m=0;m<2;m++){
		    scanf(" %d", &(sz[k][m]));
		}
	}
	i=0;
	for(k=0;k<n;k++){
		if((sz[k][0])==(sz[k][1])+1||(sz[k][0])==(sz[k][1])-2){
			i--;}
		if((sz[k][0])==(sz[k][1])-1||(sz[k][0])==(sz[k][1])+2){
			i++;}
	}
	if(i>0){printf("A");}
	if(i<0){printf("B");}
	if(i==0){printf("Tie");}
	return 0;
}