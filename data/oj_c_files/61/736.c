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
{   int a1=1,a2=1,i=0,a,n,e,y=0;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&e);
		a1=1;
		a2=1;
		if(e<=2){a=1;}else{
		for(y=0;y<e-2;y++){
			a=a1+a2;
			a1=a2;
			a2=a;
		}}
		printf("%d\n",a);
		
	}
	return 0;
}
