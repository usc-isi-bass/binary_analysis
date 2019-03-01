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
	char zfc[1500];
	int n;
	int kongge[600];
	int i;
	int j=1;
	int k;
	gets (zfc);
	n=strlen(zfc);
	kongge[0]=-1;
	for(i=0;i<n;i++){
		if(zfc[i]==' '){
			kongge[j]=i;
			j++;
		}
	}
	k=j;
	j=0;
	kongge[k]=n;
	if(j==0){
		printf("%d",kongge[j+1]-kongge[j]-1);
		j++;
	}
	for(j=1;j<k;j++){
		if((kongge[j+1]-kongge[j]-1)!=0){
			printf(",%d",kongge[j+1]-kongge[j]-1);
		}
	}
	return 0;
}
