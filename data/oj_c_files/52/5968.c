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
	int m,n,*q,i,a[101],j,k,l;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	q=a;           //??????????????
	for(i=0;i<n-m;i++)
		*(q+n+i)=*(q+i);   //???????????????????
	for(i=0;i<n-1;i++)
		cout<<*(q+n-m+i)<<' ';  //????????????????
	cout<<*(q+n+n-m-1)<<endl;

     
	return 0;
}