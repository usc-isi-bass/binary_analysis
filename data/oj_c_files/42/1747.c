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
	int n,k;
	cin>>n;
	int a[n];
	for(int t=0;t<=n-1;t++){
		cin>>a[t];
	}
	cin>>k;
	int number=0,b=0;
	for(int i=0;i<=n-1;i++){
		if(a[i]!=k){number=number+1;
		}}
		for(int i=0;i<=n-1;i++){
		if(a[i]!=k){b=b+1;cout<<a[i];
		if(b<number)cout<<" ";}
			}return 0;

}