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


int main(int argc, char* argv[])
{
	int a[5][5];
	int max,min,k=0;
	int i,j,l,f;
	int g=1;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<5;i++){
		max=a[i][0];
        for(j=0;j<5;j++){
			if(max<=a[i][j]){
				max=a[i][j];
				k=j;
			}
		}
		min=a[0][k];
        for(l=0;l<5;l++){
			if(min>=a[l][k]){
				min=a[l][k];
			    f=l;
			}
		}
		if(f==i){
			printf("%d %d %d",f+1,k+1,a[f][k]);
			g=0;
		}
	}
	if(g!=0){
		printf("not found");
	}
	return 0;
}

