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

char s[100][255];
int main(){
	int n,k,i,j,b=0,c=0,d=0,e=0,flag=0;
	int num[1000];
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}

		for(i=0;i<n-1&&!flag;i++){
			for(j=i+1;j<n;j++){
				if(num[i]+num[j]==k){
					flag=1;
				}
			}
		}
		if(flag==1){
			printf("yes");
		}else {
			printf("no");
		}


	return 0;
}