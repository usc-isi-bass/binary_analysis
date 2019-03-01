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

void move(int a[100],int n,int m)
{
	int temp,i;
	temp=a[n-1];
	for(i=n-1;i>=1;i--)
		a[i]=a[i-1];
	a[0]=temp;
	
	m--;
	if(m>0) move(a,n,m);
}

void main()
{
	int number[100],n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	move(number,n,m);
	printf("%d",number[0]);
	for(i=1;i<n;i++)
		printf(" %d",number[i]);
}

