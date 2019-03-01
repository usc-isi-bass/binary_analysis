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
	int i,n;scanf("%d",&n);
	int *p=(int *)calloc(1,100*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i--;i>=0;i--)
	{
		if(i==0) printf("%d",*(p+i));
		else printf("%d ",*(p+i));
	}
}