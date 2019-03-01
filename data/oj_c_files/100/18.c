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
	int i,x=0;
	char a[301],d;static int b[301];
	gets(a);
    for(i=0;i<=strlen(a);i=i+1)
	{
		if(a[i]>=97&&a[i]<=122)
			b[a[i]-97]=b[a[i]-97]+1;
	}
	for(i=0;i<=25;i=i+1)x=x+b[i];
	if(x==0)printf("No");
	else 
	{
		for(i=0;i<=25;i=i+1)
		{
			d=i+97;
			if(b[i]!=0)printf("%c=%d\n",d,b[i]);
		}
	}
}
    