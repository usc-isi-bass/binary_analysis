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
	int a,b,c,d,e,f,p,q,r,s;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0))
	{
		p=d+12-a;
		if(e<b) {p=p-1;q=e+60-b;}
		else q=e-b;
		if(f<c) {q=q-1;r=f+60-c;}
		else r=f-c;
		s=p*3600+q*60+r;
		printf("%d\n",s);
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
	return 00;
}