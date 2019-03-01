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
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)b[i]=a[i];
	for(int k=0;k<n;k++){
		if(n-m+k<=n-1)a[k]=b[n-m+k];
		else a[k]=b[k-m];
	}
	for(int i=0;i<n;i++){
		if(i==0)cout<<a[i];
		else cout<<" "<<a[i];
	}
	return 0;
}