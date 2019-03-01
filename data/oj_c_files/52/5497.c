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

main()
{
	int a[201],n,m,i;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=n+1;i<=2*n-m;i++) a[i]=a[i-n];
	for(i=n-m+1;i<=2*n-m;i++) {if(i!=n-m+1) printf(" ");printf("%d",a[i]);}
}