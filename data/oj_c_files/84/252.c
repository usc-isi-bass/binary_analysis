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
{long int i,n,q=0,w=0,e=0,a,b,t;
	scanf("%d",&n);
	scanf("%d",&a);
	q=a;
	scanf("%d",&a);
	w=a;
	if (q<w){t=q;q=w;w=t;}

for(i=1;i<=n-2;i++)
{
	scanf("%d",&a);
	if(a>q){w=q;q=a;}
	else if(a>w)w=a;
	
	



}
printf("%d\n%d\n",q,w);

}
