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
	int n,a,b,i,A,B,T;
	A=0;
	B=0;
	T=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if ((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			A=A++;
		else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))
			T=T++;
		else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
            B=B++;
	}
	if (A>B)
		printf("A");
	else if(B>A)
		printf("B");
	else if(A==B)
		printf("Tie");
	return 0;
}