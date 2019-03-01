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

int a(int m,int n)
{
	int c;
	 if(m == 1 || n== 1 || m == 0) return 1; 
	 if(m<n)    return a(m, m);   
	 else return a(m-n,n)+a(m,n-1);
}
main()
{
	int m[20],n[20],k,c,i;
	scanf("%d\n",&k);
	
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m[i],&n[i]);
		c=a(m[i],n[i]);
		printf("%d\n",c);
	}
}

