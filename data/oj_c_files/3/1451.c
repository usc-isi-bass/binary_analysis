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
	int n,k;
	int shuzu[1000];
	scanf("%d %d",&n,&k);

	for(int i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
		
	}
	int count1=0;
	for(int j=1;j<=n;j++){
		for(int i=(j-1);i<n;i++){
			if(k==(shuzu[j]+shuzu[i])){
				count1+=1;
			}
			else continue;
		}
	}	
	if(count1!=0) printf("yes");
	else printf("no");

	return 0;
}