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
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f),!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)){
		int end=f+e*60+d*3600;
		int begin=c+b*60+a*3600;
		int sec=end-begin;
		if(sec<0||sec<43200)sec=sec+43200;
		printf("%d\n",sec);
	}
	return 0;
}