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
int a,n,i;
int p=0,q=0;
scanf("%d",&n);
i=1;
while(i<=n)
{
	scanf("%d",&a);
	if(a>=p){q=p,p=a;}
	if(a<p&&a>q){p=p,q=a;}
	if(a<=q){p=p,q=q;}
	i=i+1;
}
printf("%d\n%d",p,q);
	return 0;
}