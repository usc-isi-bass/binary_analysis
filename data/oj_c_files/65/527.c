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
	int n,a,b;
	int as=0,bs=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			as++;
		else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			bs++;
	}
	if(as>bs)
		printf("A");
	else if(as<bs)
		printf("B");
	else
		printf("Tie");
	return 0;
}