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
	int n;
	int a,b,c,d;
	int i,j;
	scanf("%d",&n);
	int sz[1000][1000];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d ",&(sz[i][j]));
		}
	}
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0){
				a=i;
			    b=j;
			}
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(sz[i][j]==0){
				 c=i;
				 d=j;
			}
		}
	}
    int l=b-d-1;
	int w=a-c-1;
	int s=l*w;
	printf("%d",s);
	return 0;
}