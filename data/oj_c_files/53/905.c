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

int num(int A1[],int N1)
{
	int i;
	int c=0;
	for(i=1;i<N1;i++)
		if(A1[i]!=A1[0])
		c=c+1;
		return c;
}
void cut(int A[],int N)
{
	int b[100]={0};
	int i;
	int J=0;
	for(i=1;i<N;i++)
		if(A[i]!=A[0])
		{
		b[J]=A[i];
		J=J+1;
		}
	for(i=0;i<J;i++)
		A[i]=b[i];
}
void main()
{
    int i;
    int n;
	int n0;
	int a[100]={0};
	scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=0;;i++)
	{
		n0=n;
		n=num(a,n);
		cut(a,n0);
		printf(",%d",a[0]);
		
		if(num(a,n)==0)
			break;
		
	}
}