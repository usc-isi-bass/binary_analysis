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
	int m,n,i,j,k;//?? ????????????????? 
	cin>>n>>m;//???????? 
	int a[2*n];//???? 
	for(i=0;i<n;i++)//?????? 
	{
		cin>>a[i]; 
	}
	for(j=n-m;j<n;j++)//??m??????m??? 
	{
		a[j+m]=a[j];
	}
	for(k=0;k<n-m;k++)//??n-m??????m+n? 
	{
	    a[k+m+n]=a[k];	
	}
	for(j=n;j<2*n-1;j++)//???2n-1? 
	{
		cout<<a[j]<<" ";
	}
	cout<<a[2*n-1];//?????? 
return 0;	
}  