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
	char a[80],b[80];
	int i,m,n,t,p=1;
	gets (a);
	gets (b);
    m=strlen (a);
	n=strlen (b);
	t=(m>n)?m:n;
	for (i=0;i<t;i++)
	{
		if (a[i]>96) a[i]=a[i]-32;
		if (b[i]>96) b[i]=b[i]-32;
		if (a[i]>b[i]) {printf (">");p=0;break;}
		else if (a[i]<b[i]) {printf ("<");p=0;break;}
	}
    if (p) 
		if (m>n) printf (">");
		else if (m=n) printf("=");
		     else printf ("<");
}