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
    char zfc[256],wt[256],tar[256];
	int i,j,tag;
	scanf("%s",zfc);
	scanf("%s",wt);
	scanf("%s",tar);
	int n=strlen(zfc);
	int k=strlen(wt);
	for(i=0;i<n-k+1;i++){
		tag=0;
		for(j=i;j<i+k;j++){
			if(zfc[j]!=wt[j-i]){
				tag=1;
				break;
			}
		}
		if(tag==0){
			for(j=i;j<i+k;j++){
				zfc[j]=tar[j-i];
			}
			break;
		}
	}
	puts(zfc);

	return 0;
}


