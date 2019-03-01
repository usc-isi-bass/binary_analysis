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

//????


int main()
{
	int n,i,j,k;               //?????i?j?k??????
	int a[100];                //????
	cin>>n;
	for (i=0;i<n;i++)          //??????????????
		cin>>a[i];
	int c,d;                   //c?d????????????
	for (j=0;j<(n+1)/2;j++)    //???????n/2?(n+1)/2???
	{
		c=a[j];
		d=a[n-j-1];
		a[j]=d;
		a[n-j-1]=c;
	}
	for (k=0;k<n-1;k++)        //????
		cout<<a[k]<<" ";
	cout<<a[n-1];
	return 0;
}