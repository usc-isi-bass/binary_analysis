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
	int a,b,c,d,e,f,i;
	for(i=0;i<10000;i++){
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;}		
		a=(12-a)*3600+d*3600;
		b=b*60+c;
		c=e*60+f;
		e=a+c-b;
		printf("%d\n", e);}
	return 0;
}