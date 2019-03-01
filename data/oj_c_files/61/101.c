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

int fbn(int);
int main(){
	int n;
	cin>>n;
	int i=0,a[1000];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
		cout<<fbn(a[i])<<endl;
	return 0;
}
int fbn(int n)
{
	int c;
	if(n==1||n==2)c=1;
	else c=fbn(n-1)+fbn(n-2);
	return c;
}