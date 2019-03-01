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
	int an[100];
	int a,b,M,m,n,i;
	scanf("%d",&n);
	scanf("%d\n%d",&a,&b);
	if(a>=b){
		M=a;
		m=b;
	}
	else{
		m=a;
		M=b;
	}
	for(i=2;i<n;i++){
		scanf("%d\n",&an[i]);
		if(an[i]>M){
			m=M;
			M=an[i];
		}
		else if(an[i]<M && an[i]>m){
			m=an[i];
		}
	}
	printf("%d\n%d",M,m);
	return 0;
}
