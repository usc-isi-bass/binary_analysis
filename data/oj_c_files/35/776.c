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
	int a[8][8];
	int row,col;
	int i,j,e,t,g,l=0;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++){
		g=0;
		for(j=0;j<col;j++){
			if(a[i][g]<a[i][j]){
				g=j;
			}
		}
		t=0;
		for(e=0;e<row;e++){
			if(a[i][g]<a[e][g]){
				t++;
			}
		}
		if(t==row-1){
			printf("%d+%d",i,g);
		}
		else
			l++;
		if(l==row){
			printf("No");
		}
	}	
	return 0;
}