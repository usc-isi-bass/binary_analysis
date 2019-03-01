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
	char zfc[300];
    scanf("%s",zfc);
    int count;
    count= strlen(zfc);
    int i=0,sum=0;
    for(int k = 97;k<123;k++){
		for (i=0;i<count;i++){
			if(zfc[i] == k){ 
			sum++;
			}
		}
		if(sum!=0){ 
			printf("%c=%d\n",k,sum);
			sum=0;
		}
	}
	for (i=0;i<count;i++){
		if(zfc[i]>96 && zfc[i]<123){
		sum=1;
		}
	}
	if(sum!=1){
		printf("No");
	}
	return 0;
}

