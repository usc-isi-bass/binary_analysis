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
	float sz[16];
	int n[100];
	int i,k;
	for(i=0;i>=0;i++){
		n[i]=0;
		for(k=0;k<16;k++){
			scanf("%f",&sz[k]);
			if(sz[k]==0||sz[0]==-1)
				break;
		}
		for(int a=0;a<k-1;a++){
			for(int b=a+1;b<k;b++){
				if(sz[a]==sz[b]*2||sz[a]==sz[b]/2){
				n[i]++;
				}
			}
		}
		if(sz[0]==-1)
			break;
	}
	for (k=0;k<i;k++)
		printf("%d\n",n[k]);
	return 0;
}
