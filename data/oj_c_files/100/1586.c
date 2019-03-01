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
	char w[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[300];
	int num[52]={0},i,j;
	int flag=0;
		memset(a,0,300);
	scanf("%s",a);

	for(i=0;i<300;i++){
		for(j=0;j<52;j++){
			if(a[i]==w[j]){
				num[j]++;
			}
		}
	}
	for(j=0;j<52;j++){
		if(num[j]!=0){
			printf("%c=%d\n",w[j],num[j]);
			flag=1;
		}
	}
	if(flag==0){
		printf("No");
	}
	return 0;
}
