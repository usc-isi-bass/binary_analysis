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
	int n,i;
	int a,b,x=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %d\n",&a,&b);
		if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))
			x=x;
		else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			x++;
		else
			x--;
	}
	if(x==0)
	printf("Tie");
	else if(x>=0)
		printf("A");
	else 
		printf("B");
	return 0;
}