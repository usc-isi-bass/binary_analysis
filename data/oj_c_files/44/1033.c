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


int reverse(int num); 
void main()
{
	int a[6];
	int i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++){
		a[i]=reverse(a[i]);
		printf("%d\n",a[i]);
	}
}
int reverse(int num)
{
	
	int n,i,m=0;
	if(num<0) return -1*reverse(-num);
	n=log10(num);
	for(i=0;i<n+1;i++)
	{
		int j,temp=1;
		int tempt=1;
		for(j=0;j<i;j++)temp*=10;
		for(j=0;j<n-i;j++)tempt*=10;
		m+=((num%(temp*10))/temp)*tempt;
	}
	return m;
}
