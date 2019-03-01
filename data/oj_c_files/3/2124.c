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

  int i,j,k,n,a[1500],flag=0;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=2;i<=n;i++)
		for (j=1;j<=i-1;j++) if ((a[i]+a[j])==k) flag=1;
	if (n==1) printf("no"); else
		if (flag) printf("yes"); else printf("no");
	
}