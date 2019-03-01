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



int main() {
	int i,n;
	cin>>n;
	int a[n],b[n];						//?????????a,b
	for(i=0;i<n;i++)
		cin>>a[i];						//????
	for(i=0;i<n;i++){
		b[i]=a[n-1-i];					//????
		if(i<n-1)
		cout<<b[i]<<" ";
		else cout<<b[i];				//????????
	}
	return 0;
}
