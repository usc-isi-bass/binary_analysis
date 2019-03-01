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
	int n,k,i,j,flag =1,first = 0;
	int num[1000]={0},sub=0;
	scanf("%d%d", &n,&k);
	for(i = 0;i<n;i++){
		scanf("%d", &num[i]);
	}
	for(i = 0;i<n;i++){
	    sub = k - num[i];
		for(j = i +1;j<n;j++){
			if(sub == num[j]){
				flag = 0;
				first =1;
				break;
			}
		}
		if(first)
			break;
	}
	if(flag)
		printf("no");
	else
		printf("yes");
	return 0;
}