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
	int i,n,a[100],m1=0,m2=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d\n",&a[i]);
	for(i=0;i<n;i++)
		m1=m1>a[i]?m1:a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]==m1)continue;
		else m2=m2>a[i]?m2:a[i];
	}
	printf("%d\n%d\n",m1,m2);
}
