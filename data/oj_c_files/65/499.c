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
	int a=0,b=0,n,i,c,d,e,f;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&c,&d);
		e=d-c;
		f=c-d;
		if(e==1||f==2)a++;
		else if(f==1||e==2)b++;
	}
	if(a>b)printf("A");
	else if(b>a)printf("B");
	else printf("Tie");
	return 0;

}