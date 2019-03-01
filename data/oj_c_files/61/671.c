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
	scanf("%d",&n);
	int sz[1000];
	int a;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int j=0;j<a;j++){
			if(j==0||j==1){
				sz[j]=1;
			}
			else{
		     	sz[j]=sz[j-1]+sz[j-2];
			}
		}
		printf("%d\n",sz[a-1]);
	}
	return 0;
}

