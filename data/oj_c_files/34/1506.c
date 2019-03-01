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
	int n;
	scanf("%d\n",&n);
	void jg(int x);
	jg(n);
	return 0;
}
void jg(int x)
{
	if(x>1&&x%2==1){printf("%d*3+1=%d\n",x,x*3+1);jg(x*3+1);}
	if(x%2==0){printf("%d/2=%d\n",x,x/2);jg(x/2);}
	if(x==1)printf("End");
}

