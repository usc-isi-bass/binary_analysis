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
	int a[99],n=0,i=0,j=0,e=0;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(j=n-1;j>0;j--)
		cout<<a[j]<<" ";
		cout<<a[0];
		return 0;
}
