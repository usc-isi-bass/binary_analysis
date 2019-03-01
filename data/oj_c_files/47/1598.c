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
	int n,zheng[100];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&zheng[n-i-1]);
	}
	for(i=0;i<n;i++){
		if(i<n-1){
			printf("%d ",zheng[i]);
		}else if(i==n-1){
			printf("%d",zheng[i]);
		}
	}
	return 0;
}