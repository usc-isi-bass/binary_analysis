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
	int i,n,j,t[100000],a,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(t[i]!=k){
			a=i;
			printf("%d",t[i]);
			break;
		}
	}
	for(i=a+1;i<n;i++){
		if(t[i]!=k){
			printf(" %d",t[i]);
		}
		
	}
	
	return 0;
}