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


main(){
	int a[15], i, j, k, n;
	for(;;){
		n=0;
		scanf("%d", &a[0]);
		if(a<0) break;
		else{
			for(i=1; ;i++){
				scanf("%d", &a[i]);
				if(a[i]==0) break;
				else continue;
			}
			for(j=0; j<i; j++){
				for(k=0; k<i; k++){
					if(a[j]==2*a[k]) n+=1;
					else;
				}
			}
			printf("%d\n", n);
		}
	}
}