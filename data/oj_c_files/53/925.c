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
	int n,an[300],bn[300],i=0,j=0,k=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&an[i]);
	}
	bn[0]=an[0];
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<s;j++){
			if(bn[j]!=an[i]){
				k++;
			}
		}
		if(k==s){
			bn[s]=an[i];
			s++;
		}
	}
	for(i=0;i<s-1;i++){
		printf("%d,",bn[i]);
	}
	printf("%d",bn[s-1]);
	return 0;
}