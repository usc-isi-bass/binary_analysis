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
	int a[10][10],i,j,k=0,e,m,n,temp=0,hang,lie,h=0,result=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>temp){
				temp=a[i][j];
				hang=i;
				lie=j;
			}
		}
		e=a[0][lie];
		for(k=1;k<m;k++){
			if(a[k][lie]<e){
				e=a[k][lie];
				h=k;
			}
		}
		if(h==hang){
			printf("%d+%d",hang,lie);
			break;
		}else {
			result=-1;
			continue;
		}
	}
	if(result==-1){
		printf("No");
	}
	return 0;
}
