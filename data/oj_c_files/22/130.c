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


void swap(int *p1,int *p2)
{
	int c;
	c=*p1;
	*p1=*p2;
	*p2=c;
}

void paixu(int *p,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(*(p+j)<*(p+j+1))swap(p+j,p+j+1);
}
void main()
{
	int i,j,n,a[1000];
	for(i=0;;i++)
	if(EOF==scanf("%d,",&a[i]))
		break;
	paixu(a,i);
	for(j=0;j<i-1;j++)
		if(a[j+1]<a[j])
		{
	printf("%d",a[j+1]);
	break;}
	if(j==i-1) printf("No");

		

}
