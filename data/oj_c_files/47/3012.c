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
	int a[100];
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		
		if(i==n){
			cout<<a[1];
		}
		else{
			cout<<a[n-i+1]<<' ';
		}
	}
	return 0;
}