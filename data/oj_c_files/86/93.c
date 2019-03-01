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
	int n,p,q,i,l,a[50],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=1;
		scanf("%d",&p);
		for(l=0;l<p;l++)
		{
			scanf("%d",&q);
			if(q+3*l<60&&(q+3*(l+1))>=60&&t) {a[i]=q;t=0;}
			if(q+3*l>=60&&t) {a[i]=60-3*l;t=0;}
			if(l==p-1&&q+3*(l+1)<60&&t) {a[i]=60-3*(l+1);t=0;}
		}
		if(p==0) a[i]=60;
	}
	for(i=0;i<n;i++) printf("%d\n",a[i]);
	return 0;
}