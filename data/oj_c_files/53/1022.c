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
	int *p,*q,i,j,n,k,a[300],b[300];
	scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=a;
	k=1;
	q=b;
	*q=*p;
    for(i=1;i<n;i++)
	{
		for(j=0;j<k;j++)
		{if(*(p+i)==*(q+j))
		break;}
	if(j==k)
	{*(q+j)=*(p+i);
	k++;}
	}
    for(i=0;i<k-1;i++)
    printf("%d,",b[i]);
	printf("%d",b[k-1]);
	return 0;
}
