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
	int a[1000],i,n=1,max1=0,max2=0;
	scanf("%d",&a[0]);
	while (getchar()==',') scanf("%d",&a[n++]);
    for (i=0;i<n;i++) max1= a[i]>max1? a[i]:max1;
	for (i=0;i<n;i++) max2= (a[i]<max1 && a[i]>max2)? a[i]:max2;
	if (max2>0) printf("%d",max2);
	else printf("No");
	return 0;
}
