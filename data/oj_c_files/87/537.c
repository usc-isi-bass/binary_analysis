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
	int a=3,b=8,c=9,d=8,e=8,f=8,i,s;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
	s=(d+12)*3600+(e*60)+f-(a*3600)-(b*60)-c;
	printf("%d\n",s);
	}
	return 0;
}



