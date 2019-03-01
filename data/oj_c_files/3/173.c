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


int main(int argc, char* argv[])
{
	int n, k, a[1000], b=0, i;
	scanf("%d %d\n", &n, &k);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j]==k){
				b=1;
				printf("yes\n");
				break;
			}
		}
		if(b==1){
			break;}
	}
	if(b==0){
		printf("no\n");}



	
 
	return 0;
}
