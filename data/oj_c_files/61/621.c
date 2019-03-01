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
	int n,i,j,a[1000],s[1000],b[1000];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s[i]=0;	
		b[0]=1;
		b[1]=1;
		for(j=2;j<a[i];j++){
			b[j]=b[j-1]+b[j-2];
		}
		for(j=0;j<a[i];j++){
			s[i]+=b[j];
		}
	printf("%d\n",b[j-1]);
	}
	return 0;
}
