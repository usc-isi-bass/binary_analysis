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
	int i,m,n,k,j,l;
	scanf("%d %d",&n,&m);
	while (m>0)
	{i=3;
	   l=fmod(m,2);
	   while (i<=n)
	   {
		   l=fmod(m+l,i);
		   i++;
	   }
		printf("%d\n",l+1);
		scanf("%d %d",&n,&m);
	}
	return 7;
}
