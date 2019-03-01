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
	int n,tr;cin>>n;
	int a[n];
	int *p=a;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		tr=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tr;
	}
	for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
	cout<<a[n-1];//*?p+i???????a???i???


return 0;
}

