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
	 long n,k,i,num=0,a[100001];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	scanf("%ld",&k);
	long *p1,*p2;
	long *max;//???????????????????
	max=a+n;
	for(p1=a;p1<max;p1++) //??????????????????????????
		if(*p1==k) 
			{num++;
			for(p2=p1;p2<(a+n);p2++)
				*p2=*(p2+1); p1--;}
	max=a+n-num-1;
	for(p1=a;p1<max;p1++)//???????
	printf("%ld ",*p1);
	printf("%ld",*p1);
}