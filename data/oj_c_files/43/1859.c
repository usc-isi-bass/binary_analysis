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
	{int m,i,q,a;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
		{a=1;
		for(q=3;q<(m-i)/3;q=q+2)
			{if(i==i/q*q&&i/q!=1){a=0;break;}
			if((m-i)==(m-i)/q*q) {a=0;break;}}
		if (a) printf("%d %d\n",i,m-i);}
	return 0;
}
