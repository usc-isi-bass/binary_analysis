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
	int shuzu[Row][Len];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&shuzu[0][i]);
	}
	int j,r;
		r=0;
	for(j=n-1;j>=0;j--){

		shuzu[1][r]=shuzu[0][j];
		r++;
	}
	for(r=0;r<n-1;r++){
	printf("%d ",shuzu[1][r]);
	}
	printf("%d",shuzu[1][n-1]);
	return 0;
}
