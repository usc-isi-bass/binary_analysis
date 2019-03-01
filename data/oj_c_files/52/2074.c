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
	int n, m;
	scanf("%d%d", &n,&m); 
	int*num=(int*)malloc(sizeof(int)*(n+m)); 
	for(int i=m;i<m+n;i++) {  
		scanf("%d", &num[i]); } 
	for(int i=n;i<m+n;i++) {  
		num[i-n]=num[i]; } 
	printf("%d", num[0]);
	for(int i=1;i<n;i++) { 
		printf(" %d", num[i]); } 
	free(num); 
	return 0;
}
