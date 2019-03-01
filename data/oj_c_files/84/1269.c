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
int n,a,b,c,i,m;
scanf("%d\n%d\n%d\n",&n,&a,&b);
i=2;
if(a<b){
	m=a;
	a=b;
	b=m;
}
while(i<n){
	scanf("%d",&c);
    i+=1;
	if(c>=a){
		b=a;
        a=c;
	}else if(c>=b){
		b=c;
	}
}
printf("%d\n%d\n",a,b);
	return 0;
}