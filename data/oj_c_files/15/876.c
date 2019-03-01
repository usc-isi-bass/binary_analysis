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
	int i, j, n, left_i=-1, left_j, right_i, right_j, num, temp;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		num=0;
		for(j=0; j<n; j++){
			scanf("%d", &temp);
			if(temp==0){
				num++;
				if(num==1&&left_i<0){
					left_i=i;
					left_j=j;
				}
				else{
					right_i=i;
					right_j=j;
				}
			}
		}
	}

	printf("%d\n", (right_i-left_i-1)*(right_j-left_i-1));

	return 0;
}