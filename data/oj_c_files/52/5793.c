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
	int N,m,temp;
	cin>>N>>m;
	const int n=N;
	int a[n];
	int *p=a;
	for(int i=0;i<=n-1;++i)
		cin>>*(p+i);
	for(int k=1;k<=m;++k){
		temp=*(p+n-1);
		for(int i=n-2;i>=0;--i)
			*(p+i+1)=*(p+i);
		*p=temp;
	}
	for(int i=0;i<=n-1;++i){
		if(i!=n-1) cout<<*(p+i)<<' ';
		else cout<<*(p+i);
	}
	return 0;
}
