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
	int sz[300];
	int nsz[300];
	int i,j,w=1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	printf("%d",sz[0]);
	nsz[0]=sz[0];
	for(i=1;i<n;i++){
		for(j=0;j<w;j++){
			if(sz[i]==nsz[j]){
				flag=1;
			//	break;
			}
		}
		if(flag==0){
			nsz[w]=sz[i];
			w++;
			printf(",%d",sz[i]);
		}
		flag=0;
	}
	
	return 0;
}