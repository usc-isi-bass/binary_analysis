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
	int n,k;
	int i,j,p=1;
	int num[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-i;j++){
			if(num[i]+num[j]==k){
			p=0;
			}
		}
	}
	if(p==0){
		printf("yes\n");
	}
	else if(p=1){
		printf("no\n");
	}
	return 0;
}

