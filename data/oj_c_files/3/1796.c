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

int main()
{
	int n,k,DATA[N],i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&DATA[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(DATA[i]+DATA[j]==k){
				printf("yes");
				goto end;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(k-DATA[i]!=DATA[j]){
				printf("no");
				goto end;
			}
		}
	}
end:return 0;
}