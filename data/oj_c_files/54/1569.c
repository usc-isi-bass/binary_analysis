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
	int n,m,k,i;
	int temp = 0;
	scanf("%d%d",&n,&k);
	for(i = n + k;; i += n){
		m = i;
		for(int j = 0;j < n;j ++){
			if(m % n != k){
				temp = 1;
				break;
			}
			m = m - k - m/n;
		}
		if(temp == 0 && m > 0)
			break;
		temp = 0;
	}
	printf("%d\n",i);
	return 0;
}