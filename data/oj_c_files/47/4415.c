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

/*??????*/
void main()
{
int a[100];
int n,i,b;
scanf("%d\n",&n);
i=1;
while(i<=n){
scanf("%d",&a[i]);
i++;
}
i=1;
while(i<=n/2)
{
	b=a[i],a[i]=a[n-i+1],a[n-i+1]=b;
	i++;
}
i=1;
while(i<n)
{
	printf("%d ",a[i]);
	i++;
}
printf("%d",a[n]);
}