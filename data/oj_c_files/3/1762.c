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
	int n,b,s[1000],a;
	scanf("%d %d",&n,&b);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(int k=0;k<n;k++){
		for(int i=1;i<n-k;i++){
			a=s[k]+s[k+i];
			if(a==b){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");	
	return 0;
}