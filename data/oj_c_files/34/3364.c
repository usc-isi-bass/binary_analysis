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

void main()
{
	int a,b;
	scanf("%d",&a);
	while(a!=1){
		if(a%2==1) { printf("%d*3+1=",a);a=a*3+1;printf("%d\n",a);}
		else if(a%2==0){ printf("%d/2=",a);a=a/2;printf("%d\n",a);}
	}
	printf("End");
}






