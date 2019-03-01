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

int main() {
    int n,i,j,sz[100],chance[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(j=0;j<n-1;j++){
		chance[j]=sz[i-1];
		printf("%d ",chance[j]);
		i--;
	}
	j+=1;
	chance[j]=sz[i-1];
	printf("%d",chance[j]);
	return 0;
}
