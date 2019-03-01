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
	int i,l,r,t=0,a[301]={0};
	char c[301],x;
	scanf("%s",c);
	l=strlen(c);
	for(x='A';x<='Z';x++)
	{
		r=0;
		for(i=0;i<l;i++)
			if(c[i]==x) {r++;t=1;}
		if(r>0) printf("%c=%d\n",x,r);
	}
	for(x='a';x<='z';x++)
	{
			r=0;
			for(i=0;i<l;i++)
				if(c[i]==x) {r++;t=1;}
			if(r>0) printf("%c=%d\n",x,r);
	}

		if(t==0) printf("No\n");


}