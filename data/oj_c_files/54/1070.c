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


fen(int n,int k)
{
	int m,i,t;
	for(m=1;;m++){
		for(i=0,t=m;i<n;i++){
			if(t%n==k)
				t-=t/n+k;
			else
				break;
		}
		if(i>=n&&t>=1)
			break;
	}
	return m;
}

main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",fen(n,k));
}