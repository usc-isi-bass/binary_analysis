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
    int n,i,m;
	m=0;
    scanf("%d",&n);
    for(i=n;i>0;i--)
{
    if(i/10!=7)
		if(i-(i/10)*10!=7)
			if(i%7!=0)
               m=m+i*i;
}
    printf("%d",m);
    return 0;
}
	