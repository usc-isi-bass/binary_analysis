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

main()
{
    int i,t;
	scanf("%d",&t);
	int a[20];
    int	b[20];
	for(i=0;i<t;i++)
		scanf("%d %d",&a[i],&b[i]);
	int k(int m, int n);
	for(i=0;i<t;i++)
		printf("%d\n",k(a[i],b[i]));
}

int k(int m, int n)
{
  if(m<0)
     return 0;
  if(m==0||n==1)
     return 1;
  return k(m-n,n)+k(m,n-1);
}