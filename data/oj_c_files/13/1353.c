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
	int n;
	int *number;
	int i,j;
	int sum;

	scanf("%d",&n);
	number=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
	}

	i=0;
	while((i<n)&&(sum!=0)){
	    if((i==n-1)&&(number[i]!=0)){
			printf("%d",number[i]);
		}
		sum=0;
		for(j=i+1;j<n;j++){
			if(number[j]==number[i]){
				*(number+j)=0;
			}
			sum+=number[j];
		}
		
		if((sum!=0)&&(number[i]!=0)){
			printf("%d ",number[i]);
		}
		else if ((sum==0)&&(number[n-1]==0)){
			printf("%d",number[i]);
			sum=0;
		}
		i++;

	}
	
	free(number);
	return 0;
}
