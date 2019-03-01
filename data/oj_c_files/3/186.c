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

void main()
{
	int n, i, j, k, number[1000], flag=0;
	scanf("%d%d", &n, &k);
	for(i=0;i<n;i++){
		scanf("%d", &number[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i != j){
				if(number[i]+number[j] == k)
					flag++;
			}
			else
				continue;
		}
	}
	if(flag != 0)
		printf("yes");
	else
		printf("no");
}