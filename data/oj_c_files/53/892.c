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
	int n,sz[350],szy[350],a,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	szy[0]=sz[0];
	m=1;
	for(int k=1;k<n;k++){
		a=0;
		for(int j=0;j<m;j++){
			if(sz[k]!=szy[j]){
				a++;
			}
		}
		if(a==m){
			m++;
			szy[m-1]=sz[k];
		}
	}
	for(int q=0;q<m-1;q++){
		printf("%d,",szy[q]);
	}
	printf("%d",szy[m-1]);
	return 0;
}
