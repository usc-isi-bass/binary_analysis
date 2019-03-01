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
	int a[100],n,m,i;
	int* p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		if(i>=n-m){p=a;scanf("%d",p+i-n+m);}
		else {p=a+m;scanf("%d",p+i);}
	}
	for(i=0;i<n;i++)printf("%d%c",*(a+i),i==n-1?'\n':' ');
}