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
	int n,m,s[100],i,c[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(i=n-1;i>=n-m;i--){
		c[i]=s[i];
	}
	for(i=0;i<n-m;i++){
		s[n-1-i]=s[n-m-1-i];
	}
	for(i=0;i<m;i++){
		s[i]=c[n-m+i];
	}
	for(i=0;i<n-1;i++){
		printf("%d ",s[i]);
	}
	printf("%d",s[n-1]);
	return 0;
}

