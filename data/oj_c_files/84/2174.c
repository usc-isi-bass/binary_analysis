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
	int n,s,a,b,i;
	scanf("%d\n%d",&n,&s);
	a=s;
	b=s;
	for(i=1;i<n;i++){
		scanf("\n%d",&s);
		if(a>s&&b>s){
			a=a;
			b=b;
		}else if(a>s&&b<=s){
			a=a;
			b=s;
		}else{
			b=a;
			a=s;
		}
	}
	printf("%d\n%d\n",a,b);
	return 0;
}