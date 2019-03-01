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

int main(){
	int i=1,j=2,a,n,e,c[100],s[100],w[100];
	scanf("%d",&n);
	s[0]=1;
	for(int t=1;t<=90;t++){
		s[t]=i;
		e=j;
		j=i+j;
		i=e;
	}
	for(int r=0;r<=n-1;r++){
		scanf("%d",&c[r]);
		w[r]=s[c[r]-1];
	}
	for(int y=0;y<=n-1;y++){
		printf("%d\n",w[y]);
	}

	return 0;}