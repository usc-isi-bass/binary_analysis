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
	int n,m,temp;
	cin>>n>>m;
	int a[101];
	int *p=a;
	for(p=a;p<a+n;p++)
		cin>>*p;
	for(int i=0;i<m;i++){
		p=a+n-1;
		temp=*p;
		for(p--;p>=a;p--)
			*(p+1)=*p;
		p++;
		*p=temp;
	}
	for(p=a;p<a+n;p++){
		if(p==a) cout<<*p;
		else cout<<' '<<*p;
	}
	return 0;
}