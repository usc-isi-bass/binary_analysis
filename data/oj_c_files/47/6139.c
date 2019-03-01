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

int main(){
	int n,tr,i;cin>>n;
	int a[n];
	int *p=a;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		tr=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tr;
	}
	for(p=a,i=1;i<n;p++,i++)cout<<*p<<" ";
	cout<<*(a+n-1);
return 0;
}


